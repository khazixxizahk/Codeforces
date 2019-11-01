#include <stdio.h>
#include <math.h>

int power ( int x );
int solve (int n);
void reset();
int calculate ();

int a[10],b[10];

int main()
{
    int n , q ;
    short i;
    for ( i = 0 ; i < 10 ; i++ )
    {
        a[i] = power(i);
    }
    scanf ("%i",&q);
    for ( i = 0 ; i < q ; i++ )
    {
        reset();
        scanf ("%i", &n );
        printf ("%i\n",solve(n));
    }
}

int power ( int x )
{
    short i;
    int temp = 1;
    for ( i = 0 ; i < x ; i++ )
    {
        temp*=3;
    }
    return temp;
}

void reset()
{
    short i;
    for ( i = 0 ; i< 10 ; i++ )
    {
        b[i]=0;
    }
}

int solve (int n)
{
    short i , j ;
    int temp ;
    while (2==2)
    {
        i = 0 ;
        while ( i<10 )
        {
            if ( b[i] == 0 )
            {
                b[i] = 1;
                for ( j = 0 ; j < i ; j++ )
                {
                    b[j] = 0;
                }
                i=10;
                temp = calculate() ;
                if ( temp >= n )
                {
                    return temp;
                }
            }
            else
            {
                i++;
            }
        }
    }
}

int calculate ()
{
    short i;
    int sum=0;
    for ( i = 0 ; i < 10 ; i++ )
    {
        if ( b[i] == 1 )
        {
            sum+= a[i];
        }
    }
    return sum;
}

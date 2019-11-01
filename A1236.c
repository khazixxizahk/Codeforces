#include <stdio.h>

int solve (int a , int b , int c , int count);

int main()
{
    int a , b , c , i , t;
    scanf ("%i", &t);
    for ( i = 0 ; i < t ; i++ )
    {
        scanf ("%i %i %i", &a , &b , &c );
        printf ("%i\n", solve( a , b , c , 0 ));
    }
    return 0;
}

int solve (int a , int b , int c , int count)
{
    if (( b > 0 ) && ( c > 1 ))
    {
        return solve ( a , b-1 , c-2 , count+3 );
    }
    if (( b > 1 ) && ( a > 0 ))
    {
        return solve ( a-1 , b-2 , c , count+3 );
    }
    return count;
}

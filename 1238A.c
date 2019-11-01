#include <stdio.h>
#include <math.h>

int prime(unsigned long x)
{
    unsigned long i;
    for (i = 3 ; i <= sqrt(x) ; i++)
    {
        if (x%i==0)
        {
            return 1;
        }
    }
    return 0;
}

int solve (unsigned long x)
{
    unsigned long i;
    if ( x % 2 == 0 )
    {
        return 0;
    }
    for (i = 3 ; i <= x ; i += 2)
    {
        if (prime(i) == 0 && x % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int t,i;
    unsigned long x,y,minus;
    scanf ("%i", &t);
    for (i = 0 ; i < t ; i++)
    {
        scanf ("%lu %lu", &x , &y);
        minus=x-y;
        if ( solve(minus)==0 )
        {
            printf ("YES\n");
        }
        else
        {
            printf ("NO\n");
        }
    }
    return 0;
}

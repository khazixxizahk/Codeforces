#include <stdio.h>

int main()
{
    int a[100] , x , y , i , n , check = 0;
    scanf ("%i", &n );
    scanf ("%i", &a[0] );
    for ( i = 1 ; i < n ; i++ )
    {
        scanf ("%i", &a[i] );
        a[i] = a[i] + a[i - 1] ;
    }
    scanf ("%i %i", &x , &y );
    for (i = 0 ; i < n ; i++ )
    {
        if ((a[i] >= x) && (a[i] <= y) && ((a[n-1] - a[i]) >= x) && ((a[n-1] - a[i]) <=y))
        {
            check = 1;
            printf ("%i", i + 2 );
            break;
        }
    }
    if (check == 0)
    {
        printf ("%i", 0 );
    }
    return 0;
}

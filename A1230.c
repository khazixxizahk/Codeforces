#include <stdio.h>

int main()
{
    int a[4] , check[4] , sum1 = 0 , sum2 = 0 , i , j , temp , max=0 ;
    for ( i = 0 ; i < 4 ; i++ )
    {
        scanf ("%i", &a[i] );
        check[i] = 1;
        if ( a[i] > max )
        {
            max = a[i];
            temp = i;
        }
    }
    sum1 += max;
    check[temp] = 0;
    max = 0;
    j=0;
    while ( j<3 )
    {
        for ( i = 0 ; i < 4 ; i++ )
        {
            if ( a[i] > max && check[i] == 1 )
            {
                max = a[i];
                temp = i;
            }
        }
        if ( sum1 >= sum2 )
        {
            sum2 += max;
        }
        else
        {
            sum1 += max;
        }
        check[temp] = 0;
        max = 0;
        j++;
    }
    if ( sum1 == sum2 )
    {
        printf ("YES");
    }
    else
    {
        printf ("NO");
    }
    return 0;
}

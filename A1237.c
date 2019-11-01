#include <stdio.h>

int even ( int x );
void divide ( int *x , int *turn );

int main()
{
    int par , changes[13846] , i , turn = 0 ;
    scanf ("%i", &par );
    for ( i = 0 ; i < par ; i++ )
    {
        scanf ("%i", &changes[i] );
        if ( even(changes[i] ))
        {
            changes[i] /= 2;
        }
        else
        {
            divide( &changes[i] , &turn );
        }
    }
    for ( i = 0 ; i < par ; i++ )
    {
        printf ("%i\n", changes[i] );
    }
    return 0;
}

int even ( int x )
{
    if ( x % 2 == 0 )
    {
        return 1;
    }
    return 0;
}

void divide ( int *x , int *turn )
{
    if ( *turn == 1 )
    {
        if ( *x > 0 )
        {
            *x = *x / 2 ;
        }
        else
        {
            *x = *x / 2 - 1 ;
        }
        *turn = 0;
        return ;
    }
    if ( *x > 0 )
    {
        *x = *x / 2 + 1 ;
    }
    else
    {
        *x = *x / 2 ;
    }
    *turn = 1 ;
}

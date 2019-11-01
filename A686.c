#include <stdio.h>

int main()
{
    int n , quant , i , distress=0;
    long long x;
    char type;
    scanf ("%i %I64d", &n , &x );
    for ( i = 0 ; i < n ; i++ )
    {
        scanf ("%c %c %i", &type , &type , &quant);
        if ( type == '+')
        {
            x += quant;
        }
        else
        {
            if ( x >= quant )
            {
                x -= quant;
            }
            else
            {
                distress++;
            }
        }
    }
    printf ("%I64d %i", x , distress );
    return 0;
}

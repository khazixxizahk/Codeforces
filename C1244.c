#include <stdio.h>

void output ( long long  x , long long y );
void solve ( long long x , long long y );

int  w , d;
long long n , p;

int main()
{
    scanf ("%I64d %I64d %i %i", &n , &p , &w , &d);
    if (w%d==0 && p%d!=0)
    {
        output ( -1 , -1 );
    }
    else
    {
        solve ( 0 , 0 );
    }
}

void solve ( long long x , long long y )
{
    static long long point = 0 ;
    long long temp;
    if ( x + y > n  || x<0 )
    {
        output ( -1 , -1 );
    }
    else
    {
        if ( point == p )
        {
            output( x , y );
            return;
        }
        if ( point + w <= p )
        {
            temp = ( p - point ) / w ;
            point += ( temp * w );
            solve ( x + temp , y );
            return ;
        }
        if ( point + d <= p )
        {
            temp = ( p - point ) / d ;
            point += ( temp * d );
            solve ( x , y + temp );
            return ;
        }
        point -= w;
        temp = ( p - point ) / d ;
        point += (temp * d );
        solve ( x-1 , y+temp );
        return ;
    }
}

void output ( long long  x , long long y )
{
    long long z;
    if ( x == -1 )
    {
        printf ("%i",-1);
    }
    else
    {
        z = n - x - y;
        printf ("%I64d %I64d %I64d", x , y , z);
    }
}

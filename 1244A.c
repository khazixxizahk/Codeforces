#include <stdio.h>

void solve ()
{
    int i,a,b,c,d,k,temp;
    double pen1,pen2;
    scanf ("%i %i %i %i %i", &a , &b , &c , &d , &k);
    pen1=1.0 * a / c;
    pen2=1.0 * b / d;
    temp=pen1;
    if (pen1!=temp)
    {
        pen1=(int)(pen1)+1;
    }
    temp=pen2;
    if (pen2!=temp)
    {
        pen2=(int)(pen2)+1;
    }
    if (pen1 + pen2 <= k)
    {
        printf ("%.0f %.0f\n",pen1 , pen2);
    }
    else
    {
        printf ("%i\n",-1);
    }
}

int main()
{
    int t,i;
    scanf ("%i", &t);
    for ( i = 0 ; i < t ; i++)
    {
        solve();
    }
    return 0;
}

#include <stdio.h>

void solve(int n)
{
    int i,a[1000],max=0,meet=1,count=0;
    for (i = 0 ; i < n ; i++)
    {
        scanf ("%i", &a[i]);
    }
    i=0;
    while (meet==1)
    {
        if (a[i] == 0)
        {
            count++;
            if (count > max)
            {
                max=count;
            }
        }
        else
        {
            if (count + 1 > max)
                {
                    max=count + 1;
                }
            meet=0;
        }
        i++;
    }
    i=n;
    count=0;
    meet=1;
    while (meet==1)
    {
        if (a[i] == 0)
        {
            count++;
            if (count > max)
            {
                max=count;
            }
        }
        else
        {
            if (count + 1 > max)
                {
                    max=count + 1;
                }
            meet=0;
        }
        i++;
    }
    printf ("%i",max);
}

int main()
{
    int t,i,n;
    scanf ("%i", &t);
    for (i = 0 ; i < t ; i++)
    {
        scanf ("%i", &n);
        solve(n);
    }
    return 0;
}

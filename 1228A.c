#include <stdio.h>

int l,r;

int allDiff(int x)
{
    int i,j,kt=1,n;
    int c[7];
    n=0;
    while (x>0)
    {
        c[n]=x%10;
        x=x/10;
        n++;
    }
    for (i=0;i<n-1;i++)
        for (j=i+1;j<n;j++)
            if (c[i]==c[j])
                return 0;
    return 1;
}

int solve()
{
    int i;
    for (i=l;i<=r;i++)
        if (allDiff(i))
            return i;
    return -1;
}

int main()
{
    scanf ("%i %i",&l,&r);
    printf("%i",solve());
    return 0;
}

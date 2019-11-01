#include <stdio.h>

int m,n,a[501][501],possible=1,sum=0;

void checkAndReplace (int y,int x)
{
    int roof=a[y][x]+1,floor=a[y][x]-1;
    if (y<m)
        roof=a[y+1][x];
    if (x<n)
        if (roof>a[y][x+1])
            roof=a[y][x+1];
    if (y>1)
        floor=a[y-1][x];
    if (x>1)
        if (floor<a[y][x-1])
            floor=a[y][x-1];
    if (floor<roof-1)
    {
        if (a[y][x]==0)
            a[y][x]=roof-1;
    }
    else
        possible=0;
}

void solve (int y, int x)
{
    checkAndReplace(y,x);
    if ((x==1&&y==1)||(possible==0))
        return;
    else
        if (x==1)
            solve(y-1,n);
        else
            solve(y,x-1);
}

int main()
{
    int ai,aj;
    scanf ("%i %i",&m,&n);
    for (ai=1;ai<=m;ai++)
        for(aj=1;aj<=n;aj++)
            scanf ("%i",&a[ai][aj]);
    solve(m,n);
    if (possible==1)
        for (ai=1;ai<=m;ai++)
            for(aj=1;aj<=n;aj++)
                sum+=a[ai][aj];
    else
        sum=-1;
    printf ("%i",sum);
    return 0;
}

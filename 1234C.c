#include <stdio.h>

int a[2][200000],n;
int moveHorizontal(int y,int x);

int moveVertical(int y,int x)
{
    if (a[y][x]==0)
        return 0;
    else
        return moveHorizontal(y,x+1);
}

int moveHorizontal(int y,int x)
{
    if (y==1&&x==n)
        return 1;
    if (y==0&&x==n)
        return 0;
    if (a[y][x]==0)
        return moveHorizontal(y,x+1);
    else
        if (y==0)
            return moveVertical(1,x);
        else
            return moveVertical(0,x);
}

void input()
{
    int i,j;
    char c;
    scanf ("%i",&n);
    for (i=0;i<2;i++)
    {
        scanf ("%c",&c);
        for (j=0;j<n;j++)
        {
            scanf ("%c",&c);
            a[i][j]=c-48;
            if (a[i][j]==1||a[i][j]==2)
                a[i][j]=0;
            else
                a[i][j]=1;
        }
    }
}

void solve()
{
    input();
    if (moveHorizontal(0,0)==0)
        printf ("NO\n");
    else
        printf ("YES\n");
}

int main()
{
    int query,i;
    scanf ("%i",&query);
    for (i=0;i<query;i++)
        solve();
    return 0;
}

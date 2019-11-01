#include <stdio.h>

int n,s,a[200002];
int main()
{
    int i,j,kt=1;
    char c;
    scanf ("%i %i",&n,&s);
    scanf("%c",&c);
    for (i=0;i<n;i++)
    {
        scanf("%c",&c);
        a[i]=c-48;
    }
    if (s==n&&n==1)
            printf ("0");
    else
    {
        i=1;
        j=1;
        if (a[0]!=1&&i<=s)
        {
            a[0]=1;
            i+=1;
        }
        while (i<=s&&j<=n)
        {
            if (a[j]!=0)
            {
                a[j]=0;
                i++;
            }
            j++;
            if (j>n)
                kt=0;
        }
        for (i=0;i<n;i++)
            printf ("%i",a[i]);
    }
    return 0;
}

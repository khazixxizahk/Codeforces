#include <stdio.h>
#include <string.h>


void solve ( char s[] )
{
    int i , l = strlen(s) , a[26];
    for ( i = 0 ; i < 26 ; i++ )
    {
        a[i] = 0;
    }
    i = 0;
    while (i < l )
    {
        if ( a[s[i] - 97] == 2 )
        {
            if ( s[i] != s[i + 1] )
            {
                a[s[i] - 97] = 1;
            }
            else
            {
                i++;
            }
        }
        else
        if ( a[s[i] - 97] == 0 )
        {
            if ( s[i] == s[i + 1] )
            {
                a[s[i] - 97] = 2;
                i++;
            }
            else
            {
                a[s[i] - 97] = 1;
            }
        }
        i++;
    }
    for ( i = 0 ; i < 26 ; i++ )
    {
        if (a[i] == 1)
        {
            printf ("%c",i + 97);
        }
    }
    printf ("\n");
    return ;
}

int main()
{
    char s[500];
    int t,i;
    scanf ("%i", &t );
    gets(s);
    for ( i = 0 ; i < t ; i++ )
    {
        gets(s);
        solve(s);
    }
    return 0;
}


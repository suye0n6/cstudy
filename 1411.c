#include <stdio.h>

int main()
{
    int a[55];
    int n, i, k;
    scanf("%d", &n);
    for(i = 0; i<55; i++)
    {
        a[i]=0;
    }
    for(i=0;i < n-1; i++)
    {
        scanf("%d", &k);
        a[k]=1;
    }
    for(i = 1; i <= n; i++)
    {
        if(a[i] == 0)
        {
            printf("%d", i);
            return 0;
        }
    }
    
}

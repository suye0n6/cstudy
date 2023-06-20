#include <stdio.h>

int main()
{
    int a, i, j, arr[255];

    scanf("%d", &a);

    if(a == 0)
    {
        printf("0");
        return 0;
    }

    while (a > 0)
    {
        arr[i] = n%2;
        n = n/2;
        i++;
    }

    for(j = i; j >= 0; j--)
    {
        printf("%d", arr[j]);
    }

    return 0;
}
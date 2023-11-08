#include <stdio.h>

int main()
{
    int a[101];
    int j, i, n, temp;
    scanf("%d", n);
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            if(a[j]>0 && a[j+1]<0){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
       printf("%d", a[i]);
    }
    return 0;
}


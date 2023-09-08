#include "stdio.h"
 
int main()
{
    int matrix[100][100] = {};
    
    int h,w,n,l,d,x,y;
    
    scanf("%d %d",&h,&w); 
    scanf("%d",&n);      
    
    for(int i = 1; i <= n; i++){
        scanf("%d %d %d %d",&l,&d,&x,&y);
        if(d == 0){
            for(int j = 0; j<l; j++){
                matrix[x][y+j] = 1;
            }
        }
        else{
            for(int j = 0; j<l; j++){
                matrix[x+j][y] = 1;
            }
        }
    }
    
    for (int i = 1; i <= h; i++) 
    {
        for (int j = 1; j <= w; j++) 
        {
            printf("%d ", matrix[i][j]); 
        }
        printf("\n");
    }
    
    return 0;
}

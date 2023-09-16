#include<stdio.h>
 
 
int main(){
    
    int num;
    int buf[100] = {};
    scanf("%d",&num);
    
    for(int i =0; i<num; i++){
        scanf("%d", &buf[i]);
    }
  
    for(int k = 0; k < 2; k++){
        for(int j = 0; j <num; j++){
            printf("%d\n",buf[j]);
        }
    }
    
    return 0;
}
 

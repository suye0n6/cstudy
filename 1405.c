#include<stdio.h>
 
 
int main(){
    
    int n;
    int b[1000] = {};
 
    scanf("%d",&n);
    
    for(int i =0; i<n; i++){
        scanf("%d", &b[i]);
    }
  
    int index = 0; //출력 위치를 0~num-1 (k<num)
    for(int k = 0; k < n; k++){
        index = k; 
        for(int j = 0; j <n; j++){
            
            printf("%d ",b[index]);
            index++;
            if(index == n){ 
                index = 0; //k = 0 일때때
   //index는 0,  buf[0]~ buf[4]까지 1,2,3,4,5, 출력

 
            }
        }
        printf("\n");
    }
    
    return 0;
}



#include <stdio.h>
int main() 
{
    int n, i, j; 
    char name[55][22]; 
    int s[55], r[55]; 
  
    scanf("%d", &n); //배열 크기, 학생 수 입력
    for(i=1; i<=n; i++) 
    {
        scanf("%s", name[i]); //이름과
        scanf("%d", &s[i]); //점수를 입력받고 저장
        r[i]=1; //순위 기본1
        
    }
  
    for(i=1; i<=n; i++) //비교를 위한 반복
        for(j=1; j<=n; j++)
            if(s[i] < s[j]) //비교하여 순위를 낮춤춤
                r[i]++; //순위값은 높을 수록 뒷 순위
              
    for(i=1; i<=n; i++) //3번째 순위의 출력을 위한 반복
        if(r[i]==3) //3번째 순위의 학생을 찾아
            printf("%s", name[i]); //해당 학생의 이름을 출력
      
    return 0; 
}

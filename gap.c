#include<stdio.h>
void insertsort(int list[], int frist, int last, int gap)
{
	int i,j,key;
	for(i=first+gap;i<=last;i=i+gap)
	{
		key=list[i];
		for(j=i-gap;j>=first && key<list[j];j=j-gap)
		{
			list[j+gap]=list[j];
		}
		list[j+gap]=key;
	}
}
int main()
{
	int list[]={10,8,6,20,4,3,22,1,0,15,16};
	int n, i, j, gap;
	n=sizeof(list)/sizeof(int);
	for(gap=n/2; gap>0; gap=gap/2)
	{
		if((gap%2)==0) gap++;
		for(i=0;i<gap;i++)
		{
			insertsort(list,i,n-1,gap);
		}
        for(int k =0; k<n; k++)
        {
            printf("%d", list[k]);
        }
        printf("\n");
	}
    for(i=0;i<n;i++)
    {
        printf("%d",list[i]);
    }
    return 0;
}
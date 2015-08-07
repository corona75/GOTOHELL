#include<stdio.h>

int main()
{
	int i,j,x,y;
	int array[100][100]={0};
	printf("몇 행을 원하십니까?");
	scanf("%d",&x);
	printf("몇 열을 원하십니까?");
	scanf("%d",&y);
	for(i=0;i<x;i++)
		{
			for(j=0;j<y;j++)
			{
			printf("숫자를 입력하십시오.");
			scanf("%d",&array[i][j]);
			}
		}
	for(i=0;i<x;i++)
		{
			for(j=0;j<y;j++)
			{
			printf("%3d",array[i][j]);
			}
		puts("");
		}
}
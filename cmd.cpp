#include<stdio.h>

int main()
{
	int i,j,x,y;
	int array[100][100]={0};
	printf("�� ���� ���Ͻʴϱ�?");
	scanf("%d",&x);
	printf("�� ���� ���Ͻʴϱ�?");
	scanf("%d",&y);
	for(i=0;i<x;i++)
		{
			for(j=0;j<y;j++)
			{
			printf("���ڸ� �Է��Ͻʽÿ�.");
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
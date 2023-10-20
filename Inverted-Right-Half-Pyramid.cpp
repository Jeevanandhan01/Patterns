#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=(n-i)+1;j>0;j--)
//		for(int j=1;j<=(n-i)+1;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}

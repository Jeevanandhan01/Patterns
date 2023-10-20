#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf(" ");
		}
		for(int j=(n-i)+1;j>0;j--)
		{
			if( j==1 || i==1 || j==(n-i)+1)
			{
				printf("* ");
			}
			else {
				printf("  ");
			}
//			printf("%d,%d",i,j);
		}
		
		printf("\n");
	}
}

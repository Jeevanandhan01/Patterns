#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);	
	for(int i=1;i<=n;i++)
	{
		for(int j=(n-i)+1;j>0;j--)
		{
			printf(" ");
		}
		for(int j=1;j<=i;j++)
		{
			if(i==n || i==1 || j==1 || j==i)
			{
				printf("* ");
			}
			else{
				printf("  ");
			}
//			printf("%d,%d",i,j);
		}
		printf("\n");
	}
}

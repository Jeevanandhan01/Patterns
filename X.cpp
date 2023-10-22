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
		for(int j=1;j<=n-i+1;j++)
		{
			if(j==1 || j==n-i+1 )
			{
				printf("x ");
			}
			else{
				printf("  ");
			}
			
		}
		printf("\n");
	}
	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<=n-i+1;j++)
		{
			printf(" ");
		}
		for(int j=1;j<=i;j++)
		{
			if(j==1 || j==i )
			{
				printf("x ");
			}
			else{
				printf("  ");
			}
		}
		
		printf("\n");
	}
}




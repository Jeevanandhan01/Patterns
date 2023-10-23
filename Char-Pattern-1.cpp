#include<stdio.h>
int main()
{
	char c;
	scanf("%c",&c);
	char  temp = c;
	for(int i=1;i<=5;i++)
	{
		
		for(int j=1;j<=i;j++)
		{
			printf("%c ",temp);
			temp+=1;
		}
		temp = c-i;
		printf("\n");
	}
}

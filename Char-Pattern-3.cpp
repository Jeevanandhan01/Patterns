#include<stdio.h>
int main()
{
	char c;
	scanf("%c",&c);
	char temp;
	for(int i=1;i<=5;i++)
	{
		temp = c;
		for(int j=1;j<5-i+1;j++)
		{
			printf("  ");
		}
		for(int j=1;j<=i*2-1;j++)
		{
			if(i>j)
			{
				printf("%c ",temp);
				temp++;
			}
			else if(j==i)
			{
				temp = c+i-1;
				printf("%c ",temp);
			}
			else{
				temp--;
				printf("%c ",temp);
			}
		}
		printf("\n");
	}
}

//Output :
//        A
//      A B A
//    A B C B A
//  A B C D C B A
//A B C D E D C B A

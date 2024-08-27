#include<stdio.h>
int main()
{
	int a, temp;
	printf("Enter a number:");
	scanf("%d",&a);
	if(a<0)
	{
		printf("Number is negative!!!");
	}
	else if(a>0)
	{
		printf("Number is positive!!!");
	}
	else
	{
		printf("Number is zero!!!");
	}
}
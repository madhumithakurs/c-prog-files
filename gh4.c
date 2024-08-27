#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the three sides of a triangle:");
	scanf("%d%d%d",&a,&b,&c);
	if(a=b=c)
	{
		printf("An equilateral triangle is formed!!!");
	}
	else if(a==b || b==c || c==a)
	{
		printf("An isosceles triangle is possible!!!");
	}
	else
	{
		printf("Triangle is not possible!!!");
	}
}

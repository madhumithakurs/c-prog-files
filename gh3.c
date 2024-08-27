#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter 3 numbers:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("a:%d is greatest among the three",a);
	}
	else if(b>a && b>c)
	{
		printf("b:%d is greatest among the three",b);
	}
	else
	{
		printf("c:%d is greatest among the three",c);
	}
}
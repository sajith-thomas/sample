#include<stdio.h>
int sum(int,int);
int main()
{
	int a,b;
	printf("Enter two numbers : ");
	scanf("%d%d",&a,&b);
	printf("sum=%d",sum(a,b));
}
int sum(int x,int y)
{	
	return(x+y);
}

#include<stdio.h>
int main()
{
 int n;
 printf("Enter the no of rows");
 scanf("%d",&rows);
 printf("Enter the no of columns");
 scanf("%d",&columns);
 printf("Enter an integer: ");
 scanf("%d", &n);
 for(int i = 1; i<= 10; i++)
 {
  printf("%d * %d = %d \n", n,i,n * i);
}
  return 0;
}
 

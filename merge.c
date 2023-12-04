#include<stdio.h>
void main()
{
int array1[100],array2[100],s1,s2,s3,array3[200],temp;
int j=0;
printf("Enter the size of the first array : ");
scanf("%d",&s1);
printf("Enter the elements of the first array : ");
for(int i=0;i<s1;i++)
	{
		scanf("%d",&array1[i]);	
	}


printf("Enter the size of the second array : ");
scanf("%d",&s2);
printf("Enter the elements of the second array : ");
for(int i=0;i<s2;i++)
	{
		scanf("%d",&array2[i]);	
	}


s3=s1+s2;
printf("array3 is");
for(int i=0;i<s1;i++)
{	array3[j]=array1[i];
	j++;
}
for(int i=0;i<s2;i++)
{
 array3[j]=array2[i];
j++;
}
printf("\nARRAY BOFOR SORTING : ");
for(int i=0;i<s3;i++)
{
printf("%d\t",array3[i]);
}	
////SORT
for(int i=0;i<s3;i++)
{
	for(int j=i+1;j<s3;j++)
	{		
		if(array3[i]>array3[j])
		{
				temp=array3[i];
				array3[i]=array3[j];
				array3[j]=temp;	
		}		
	}
}
printf("\nARRAY AFTER SORTING : ");
for(int i=0;i<s3;i++)
{
printf("%d\t",array3[i]);
}	
}

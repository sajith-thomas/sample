#include<stdio.h>
int main()
{
int a[50],b[50],merged[100],n1,n2,i;

//input size and elements of first array
printf("Enter the size of the first array:");
scanf("%d",&n1);
printf("Enter %d elements for the first array:\n",n1);
for(i=0;i<n1;i++)
{
scanf("%d",&a[i]);
}

//input size and elements of second array
printf("Enter the size of the second array:");
scanf("%d",&n2);
printf("Enter %d elements for the second array:\n",n2);
for(i=0;i<n2;i++)
{
scanf("%d",&b[i]);
}

//merging the two arrays
for(i=0;i<n1;i++){
merged[i]=a[i];//first array elements
}

for(i=0;i<n2;i++)
{
merged[n1+i]=b[i];//second array elements
}

//displaying the merged array
printf("merged  array is:\n");
for(i=0;i<n1+n2;i++){
printf("%d",merged[i]);
}
return 0;//Ending the program
}

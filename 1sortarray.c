#include<stdio.h>
void merge(int arr1[],int arr2[],int s1,int s2,int arr3[])
{
	int i=0,j=0,k=0;
	while(i<s1 && j<s2)
	{
		if(arr1[i] < arr2[j])
			arr3[k++]=arr1[i++];
		else
			arr3[k++]=arr2[j++];
	}

	while(i<s1)	
		arr3[k++]=arr1[i++];
	while (j < s2)
		arr3[k++] = arr2[j++];
}


int main()
{
	int s1,s2,arr1[s1],arr2[s2],arr3[s1+s2];
	printf("Enter the number of elements of First Array");
	scanf("%d",&s1);
	printf("Enter the elements of First Array ");
	for(int i=0; i< s1; i++)
	{	scanf("%d", &arr1[i]);	}


	printf("Enter the number of elements of Second Array ");
	scanf("%d",&s2);
	printf("Enter of elements of Second Array ");
	for(int i=0;i<s2; i++)
	{	scanf("%d",&arr2[i]);	}


	merge(arr1,arr2,s1,s2,arr3);

	printf("\nArray after merging\n");
	for (int i=0; i<s1+s2; i++)
	printf("%d ", arr3[i]);

	return 0;
}

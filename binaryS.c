#include <stdio.h>

void input(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		printf("[%d]: ",i);
		scanf("%d",&array[i]);
	}
}

int binaryS(int arr[], int size, int element)
{
	int f,l,mid;
	f=1;
	l=size;
	mid=(f+l)/2;
	while(f<=l)
	{
		if(f<arr[mid])
			l=mid-1;
		else if(f>arr[mid])
			f=mid+1;
		else
			return mid;
	}		
}

int main()
{
	int size, element;
	printf("Enter the size of array: ");
	scanf("%d",&size);
	int arr[size];
	printf("Enter the element to be searched: ");
	scanf("%d",&element);
	int i=binaryS(arr,size,element);
	printf("%d found at %d position",element,i+1);
	return 0;
}

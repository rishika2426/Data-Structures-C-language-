#include <stdio.h>

int elements()
{
	int size, i;
	printf("Enter the size of array: ");
	scanf("%d",&size);
	int array[size];
	
	for(i=0;i<size;i++)
	{
		printf("[%d]: ",i);
		scanf("%d",&array[i]);
	}
	int element=input();
	int result=linearS(array,size,element);
	print(result);
	return 0;
}

int input()
{
	int element;
	printf("Enter the element to be found: ");
	scanf("%d",&element);
	return element;
}

int main()
{
	
}
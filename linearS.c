#include <stdio.h>

int input();
int linearS(int array[], int size, int element);
void print(int pos);

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

int linearS(int array[], int size, int element)
{
for (int i = 0; i < size; i++)
    {
        if (array[i] == element)
        {
            return i;
        }
    }
    return -1;
}

void print(int pos)
{
    if (pos != -1)
    {
        printf("Element found at index %d.\n", pos);
    }
    else
    {
        printf("Element not found!\n");
    }
}

void main()
{
	elements();
	return 0;
}
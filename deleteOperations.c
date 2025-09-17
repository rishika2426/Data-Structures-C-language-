#include <stdio.h>
#define size 100

void input(int arr[],int *n)
{
	printf("Enter the elements: \n");
	for(int i=0;i<*n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n");
}

void delBeg(int arr[], int *n)
{
	int value;
	value=arr[0];
	for(int i=0;i<=*n-1;i++)
	{
		arr[i]=arr[i+1];
	}
	(*n)--;
	printf("%d deleted. \n", value);
}

void delPos(int arr[], int *n)
{
	int value,pos;
	printf("Enter index: ");
	scanf("%d",&pos);
	if(pos>*n)
	{
		printf("Exceeding value of index \n");
		return;
	}
	
	value=arr[pos];
	for(int i=pos;i<=*n-1;i++)
	{
		arr[i]=arr[i+1];
	}
	(*n)--;
	printf("%d deleted. \n", value);
}

void delEnd(int arr[], int *n)
{
	int value;
	if (*n <= 0)
	{
        printf("Array is empty, nothing to delete.\n");
        return;
    }
	value=arr[*n-1];
	(*n)--;
	printf("%d deleted. \n", value);
}

void display(int arr[], int *n)
{
	for(int i=0;i<*n;i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void main()
{
	int arr[size], n, value;
	int ch;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	input(arr, &n);
	printf("Deleteion: 1. at beg, 2. pos 3. end 0. exit \n");
	do
	{
		printf("Enter choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				delBeg(arr,&n);
				display(arr,&n);
			break;

			case 2:
				delPos(arr,&n);
				display(arr,&n);
			break;
			
			case 3:
				delEnd(arr,&n);
				display(arr,&n);
			break;
			
			case 0:
				printf("Exit!!");
				break;
			break;
			default:
				printf("Wrong choice: \n ");
			break;
		}
	}while(ch!=0);
}
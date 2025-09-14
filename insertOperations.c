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

void atBeg(int arr[], int *n)
{
	int value;
	printf("Enter the value to be inserted: ");
	scanf("%d",&value);
	(*n)++;
	for(int i=*n-1;i>=0;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[0]=value;
}

void atPos(int arr[], int *n)
{
	int value,pos;
	printf("Enter index: ");
	scanf("%d",&pos);
	if(pos>*n)
	{
		printf("Exceeding value of index \n");
		return;
	}
	printf("Enter the value to be inserted: ");
	scanf("%d",&value);
	(*n)++;
	for(int i=*n-1;i>=pos;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[pos]=value;
}

void atEnd(int arr[], int *n)
{
	int value;
	printf("Enter the value to be inserted: ");
	scanf("%d",&value);
	arr[*n]=value;
	(*n)++;

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
	printf("1. enter at beg, 2. pos 3. end 0. exit \n");
	do
	{
		printf("Enter choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				atBeg(arr,&n);
				display(arr,&n);
			break;

			case 2:
				atPos(arr,&n);
				display(arr,&n);
			break;
			
			case 3:
				atEnd(arr,&n);
				display(arr,&n);
			break;
			
			case 4:
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
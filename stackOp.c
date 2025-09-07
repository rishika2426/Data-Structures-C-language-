#include <stdio.h>
//#define size 10

void display(int stack[],int top)
{
	for(int i=0;i<=top;i++)
	{
		printf("%d \n",stack[i]);
	}
}

void push(int stack[], int *top, int element)
{
    (*top)++;
    stack[*top] = element;
}

int pop(int stack[], int *top)
{
    int ex = stack[*top];
    (*top)--;
    return ex;
}

int isEmpty(int top)
{
	if(top==-1)
		return 1;
	return 0;
}

int isFull(int top, int size)
{
	if(top==size-1)
		return 1;
	return 0;
}

void main()
{
	int top=-1, element, ch, ex,size=10;
	int stack[size];
//	printf("Enter the array elements")
	do
	{
		printf("\nEnter choice (1: push, 2: pop, 3: display, 0: exit): ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				if(isFull(top,size)==1)
				{
					printf("Stack is full \n");
				}
				else
				{
					printf("enter the element:");
					scanf("%d",&element);
					push(stack,&top,element);
					printf("push successful!\n");
				}
			break;
			case 2:
				if(isEmpty(top)==1)
					printf("Stack empty!\n");
				else
				{
					ex=pop(stack,&top);
					printf("%d element pop success!\n",ex);
				}	
			break;
			case 3:
				if(isEmpty(top)==1)
					printf("Stack empty.\n");
				else
					display(stack,top);
					
			break;
			case 0:
				printf("\n --------Exit---------");
			break;
			default:
				printf("Wrong choice!\n");
			break;
		}
	}while(ch!=0);
}
#include <stdio.h>

int input()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	digit(num);
}

int digit(int num)
{
	int number,d,r,counter=0;
	number=num;
//	printf("%d",num);
	while(num!=0)
	{
		d=num%10;
		counter++;
		num=num/10;
	}
	max(counter,number);
}

void max(int counter, int number)
{
	int d,max=0;
	while(number!=0)
	{
		d=number%10;
		for(int i=0;i<=counter;i++)
		{
			if(d>max)
			{
				max=d;
//				printf("max== %d /n",max);
			}
			else
			{
				continue;
			}
		}
		number=number/10;
	}
	printf("The maximum digit in the given num is: %d ",max);
}

void main()
{
	input();
}
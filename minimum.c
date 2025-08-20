#include <stdio.h>

void input()
{
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	digit(num);
}

int digit(int num)
{
	int d,r,count=0, number;
	number=num;
	while(num!=0)
	{
		r=num%10;
		count++;
		num=num/10;
	}
	min(number,count);
}

void min(int number,int count)
{
	int r,pos=-1, min=9;
	while(number!=0)
	{
		r=number%10;
		for(int i=0;i<=count;i++)
		{
			if(r<min)
			{
				min=r;
			}
			else
			{
				continue;
			}
			pos++;
		}
		number=number/10;		
	}
	printf("Minimum number position is at: %d",pos);
}

void main()
{
	input();
}
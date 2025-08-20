#include <stdio.h>

int rev(int num)
{
	int r;
	int d;
	while(num!=0)
	{
		d=num%10;
		r=r*10+d;
		num=num/10;
	}
	return r;
}

void digit(int r)
{
	int d;
	while(r!=0)
	{
		d=r%10;
		r=r/10;
		{
			switch(d)
			{
				case 1:
					printf("ONE ");
				break;
				case 2:
					printf("TWO ");
				break;
				case 3:
					printf("THREE ");
				break;
				case 4:
					printf("FOUR ");
				break;
				case 5:
					printf("FIVE ");
				break;
				case 6:
					printf("SIX ");
				break;
				case 7:
					printf("SEVEN ");
				break;
				case 8:
					printf("EIGHT ");
				break;
				case 9:
					printf("NINE ");
				break;
				case 0:
					printf("ZERO ");
				break;
			}
		}
	}
}
void main()
{
	int num, r;
	printf("Enter number: ");
	scanf("%d",&num);
	r=rev(num);
	digit(r);
}
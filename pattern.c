#include <stdio.h>
 
void menu()
{
	int ch,r;
	printf("1.Star 2.Alphabet 3.Number 0.Exit \n");
	printf("Enter your choice: ");
	scanf("%d",&ch);
	printf("Enter the number of rows: ");
	scanf("%d",&r);
	switch(ch)
	{
		case 1:
			star(r);
		break;
		case 2:
			alphabet(r);
		break;
 		case 3:
			number(r);
 		break;
 		default:
 			printf("Wrong choice!!");
 		break;
	}
}
 
void star(int r)
{
	for(int r=0;r<3;r++)
	{
		for(int sp=1;sp>=r;sp--)
		{
			printf(" ");
		}
		for(int c=0;c<2*r+1;c++)
		{
			printf("*");
		}
		printf("\n");
	}

	for(int r=0;r<2;r++)
	{
		for(int sp=0;sp<=r;sp++)
		{
			printf(" ");
		}
		for(int c=2;c>2*r-1;c--)
		{
			printf("*");
		}
		printf("\n");
	}
}

void alphabet()
{
	
	for(int r=0;r<3;r++)
	{
		for(int sp=0;sp<=r;sp++)
		{
			printf(" ");
		}char e='A';
		for(int c=4;c>2*r-1;c--)
		{
			
			printf("%c",e);
			e++;
		}
		printf("\n");
	}
	
	for(int r=0;r<2;r++)
	{
		for(int sp=1;sp>=r;sp--)
		{
			printf(" ");
		}char e='A';
		for(int c=0;c<=2*r+2;c++)
		{
			printf("%c",e);
			e++;
		}
		printf("\n");
	}
}

void number()
{

}

void main()
{
	menu();
}
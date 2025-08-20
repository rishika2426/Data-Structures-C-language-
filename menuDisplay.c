#include <stdio.h>

void menu()
{
	int ch,num;
	char a='A',z='Z';
	printf("Enter N:");
	scanf("%d",&num);
	printf("1.Number of stars \n 2.First N alphabets \n 3. First n natural numbers \n 4. Last n alphabets \n 0. Exit \n");
	while(1){
	printf(" Enter choice: ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			for(int i=0;i<=num;i++)
			{
				printf("* ");
			}
		break;
		case 2:
		
			for(char i=0;i<=num;i++)
			{
				printf("%c",a);
				a++;
			}
		break;
		case 3:
			for(int i=1;i<=num;i++)
			{
				printf("%d",i);
			}
		break;
		case 4:
			for(char i=0;i<=num;i++)
			{
				printf("%c",z);
				z--;
			}
		break;
		case 0:
			return;
		break;
		default:
			printf("Wrong choice");
		break;
	}}return 0;
}

void main()
{
	menu();
}
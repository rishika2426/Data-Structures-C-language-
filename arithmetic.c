#include <stdio.h>
void add(int a, int b)
{
	int sum=a+b;
	printf("%d /n", sum);
}
void sub(int a, int b)
{
	int subb=a-b;
	printf("%d /n", subb);
}
void prod(int a, int b)
{
	int pro=a*b;
	printf("%d /n", pro);
}
void div(int a, int b)
{
	int divv=a/b;
	printf("%d /n", divv);
}

void main()
{
	int a,b;
	printf("Enter the values of a and b: ");
	scanf("%d %d",&a,&b);
	add(a,b);
	sub(a,b);
	prod(a,b);
	div(a,b);
}
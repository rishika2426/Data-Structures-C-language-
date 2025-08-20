#include <stdio.h>
/*void add(int a, int b)
{
	int sum=a+b;
	printf("%d", sum);
}*/
void sub(int a, int b)
{
	int subb=a-b;
	printf("%d", subb);
}
void prod(int a, int b)
{
	int pro=a*b;
	printf("%d", pro);
}
void div(int a, int b)
{
	int divv=a/b;
	printf("%d", divv);
}

void main()
{
	int a,b;
	printf("Enter the values of a and b: ");
	scanf("%d %d",&a,&b);
//	add(a,b);
	sub(a,b);
	prod(a,b);
	div(a,b);
}
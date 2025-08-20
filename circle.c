#include <stdio.h>
float area(float pi, int r)
{
	float ar=pi*r*r;
	return ar;
}
float perimeter(float pi, int r)
{
	float peri=2*pi*r;

}
void main()
{
	int r;
	printf("ENter radius: ");
	scanf("%d",&r);
	float pi=3.14;
	float ar= area(pi,r);
	printf("Area of the circle is: %f",ar);
	float peri=perimeter(pi,r);
	printf("Perimeter of the circle is: %f",peri);
}
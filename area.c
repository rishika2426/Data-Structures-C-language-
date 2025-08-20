#include <stdio.h>
#include <Math.h>

float rect(float l, float b)
{
	float area= l*b;
	return area;
}

float triangle(float b, float h)
{
	float area= 0.5 *b*h;
	return area;
}

float square(float side)
{
	float area= 6* pow(side,2);
	return area;
}

float circle(float radius)
{
	float area= 3.14 * pow(radius,2);
	return area;
}

void main()
{
	float l, b, h, radius,  side;
	int ch;{
	printf("Enter choice: 1. Rect.  2. tri  3. squa 4. circle. 0. Exit ");
	scanf("%d ",&ch);{
	switch(ch)
	{
		case 1:
			
			scanf("%f %f",&l, &b);
			printf("Enter length and breadth: ");
			printf("Area of rectangle : %f", rect(l,b));
		break;
		case 2:
			printf("Enter breadth and height: ");
			scanf("%f ", &b);
			scanf("%f ", &h);
			printf("Area of : %f", triangle(b,h));
		break;
		case 3:
			printf("Enter side: ");
			scanf("%f",&side);
			printf("Area of : %f", square(side));
		break;
		case 4:
			printf("Enter radius: ");
			scanf("%f",&radius);
			printf("Area of : %f", circle(radius));
		break;
		default:
			printf("WRONG CHOICE!! \n");
		break;}
	}
}}
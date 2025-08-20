#include <stdio.h>
#include <Math.h>
float simple(float p, float r, float t)
{
	float simp=p*r*t/100;
	return simp;
}

float compound(float p, float r, float t)
{
	float ci= pow((1+r)/100,t);
	ci=ci*p;
	return ci;
}

void main()
{
	float p,r,t;
	scanf("%f %f %f", &p,&r, &t);
	printf("Simple Interest= %f \n", simple(p,r,t));
	printf("Compound Interest= %f \n", compound(p,r,t));
}
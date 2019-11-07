#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c;
	float x,y;
	printf("Enter the Coefficient of the Equation <a,b,c>\n");
	scanf("%d %d %d",&a,&b,&c);
	float d=(sqrt((b*b)-(4*a*c)))/2;
	x=(-b+d);
	y=(-b-d);
	printf("Roots of the Equation %f and %f",x,y);
	return 0;
}

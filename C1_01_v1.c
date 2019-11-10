#include<stdio.h>

int rectangle()
{
	int a,b;
	printf("Enter the Length and Breadth of the Rectangle\n");
	scanf("%d %d",&a,&b);
	int area=a*b;
	return(area);
}

float triangle()
{
	int a,b;
	printf("Enter the Height and Altitude of the Triangle\n");
	scanf("%d %d",&a,&b);
	float area;
	area=(a*b)/2;
	return(area);
}

int main()
{
	char choice;
	printf("Finding Area of Rectangle(r) or Triangle(t)?\n");
	scanf("%c",&choice);
	switch(choice)
	{
		case 'r': rectangle();
			 break;
		case 't': triangle();
			 break;
		default:printf("Wrong choice");
	}
	printf("Press any key to Exit\n");
	getchar();
}

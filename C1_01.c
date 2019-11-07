#include<stdio.h>

int main()
{
	//clrscr();
	int l,b,h;			//Length,breadth,height resp
	int area=0;			//variable to store area 
	char choice;			//variable to store the choice input by the user
	printf("Finding Area of Rectangle(r) or Triangle(t) ?");
	scanf("\n %c",&choice);
	if(choice=='r')
	{
		printf("Enter the length, breadth of the rectangle");
		scanf("\n %d \t %d",&l,&b);
		area=l*b;
		printf("Area of Rectangle is %d",area);
	}
	else if(choice=='t')
	{
		printf("Enter the Base and Height of the triangle");
		scanf("\n %d \t %d", &b,&h);
		area=(b*h)/2;
		printf("Area of Triangle is %d",area);
	}
	else
		printf("Wrong choice\n");
	return 0;
}

	

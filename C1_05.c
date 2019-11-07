#include<stdio.h>

int main()
{
	int c_n,u_p,r;
	double amount;
	printf("Enter the Consumption number and Rate of charge\n");
	scanf("%d \n %d",&c_n,&u_p);
	if(c_n<=0 || c_n>200)
		r=0.5;
	else if(c_n<=201 || c_n>400)
		r=100+(0.65*c_n);
	else if(c_n<=401 || c_n>600)
		r=230+(0.8*c_n);
	else
		r=390+(1*c_n);
	amount=u_p*r;
	printf("Amount =%f \n",amount);
	return 0;
}

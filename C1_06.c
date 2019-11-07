#include<stdio.h>

int main()
{
	int n;
	int sum=0;
	printf("Enter a Number \n");
	scanf("%d",&n);
	while (n != 0)
   	{
      		int rem= n % 10;
      		sum= sum + rem;
      		n= n / 10;
   	}
   	printf("Sum = %d \n",sum);
   	return 0;
}
	

#include<stdio.h>

void main()
{
	int a[10];
	int sum,n,i;
	float avg;
	printf("Enter the n\n");
	scanf("%d",&n);
	printf("Enter the values to the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)	
	{
		sum+=a[i];
	}
	avg=sum/n;
	printf("Sum = %d \nAverage = %f\n",sum,avg);
}

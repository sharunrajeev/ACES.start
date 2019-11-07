#include<stdio.h>

int main()
{
	int n;
	printf("Enter n");
	scanf("%d",&n);
	int a[10];
	int i;
	printf("Enter the Numbers\n");
	scanf("%d\n",a);
	int min=a[0];
	int max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
			min=a[i];
		if(a[i]>max)
			max=a[i];
	}
	printf("Largest number = %d",max);
	printf("Smallest number = %d",min);
	return 0;
}
		

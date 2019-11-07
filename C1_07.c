#include<stdio.h>

void main()
{
    int n,i,fact,j;
    printf("Enter the Number\n");
    scanf("%d",&n);
    printf("\nPrime Numbers are: \n");
    for(i=2; i<=n; i++)
    {
        fact=0;
        for(j=1; j<=n; j++)
        {
            if(i%j==0)
                fact++;
        }
        if(fact==2)
            printf("%d " ,i);
    }
}

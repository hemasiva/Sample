#include<stdio.h>

void main()
{
    int n,i,sum=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    i=n;
    while(n!=0)
    {
        sum+=(n%10);
        n/=10;
    }
    printf("Sum of the digit of %d is %d",i,sum);
}

#include <stdio.h>

void main()
{
    int i,sum=0,N;
    printf("Enter the number of N = ");
    scanf("%d",&N);
    for(int i=0;i<=N;i=i+1)
    {
        sum=sum+i;
    }
printf("the sum is %d",sum);
}


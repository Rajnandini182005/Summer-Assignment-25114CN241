#include<stdio.h>
int main()
{
    int i,num,factorial=1;
    printf("enter the number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        factorial=factorial*i;
    }
    printf("the factorial of %d is %d",num ,factorial);
    return 0;
}
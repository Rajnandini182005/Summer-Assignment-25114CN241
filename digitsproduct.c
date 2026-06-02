#include<stdio.h>
int main()
{
    int n,num,product=1;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n!=0)
    {
        num=n%10;
        product=product*num;
        n=n/10;
    }
    printf("the product of the digit is %d",product);
    return 0;
}
#include <stdio.h>
int main()
{
    int i,sum=0,fact,remainder,n,num;
    printf("enter thr number:\n");
    scanf("%d",&n);
    num=n;
    while(num>0)
    {
        remainder=num%10;
        fact= 1;
        for(i=1;i<=remainder;i++)
        {
            fact=fact*i;
        }
        sum=sum + fact;
        num=num/10;
    }
    if(sum==n)
    {
        printf("%d  is the strong number",n);
    }
    else {
        printf("%d is the not strong number",n);
    }
    return 0;
}
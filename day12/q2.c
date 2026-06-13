#include <stdio.h>
int armstrong(int num)
{
    int sum=0,temp =num,remainder;
    while(temp>0)
    {
        remainder=temp%10;
        sum=sum+remainder*remainder*remainder;
        temp=temp/10;

    }
    return(sum==num);

}

int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);

    if(armstrong(n))
    {
        printf("Armstrong");

    }
    else {
        printf("Not Armstrong");
    }
    return 0;

}
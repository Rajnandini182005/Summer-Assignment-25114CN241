#include<stdio.h>
int main()
{
    int num,start,end,temp,rem,sum;
    printf("enter starting nunber\n");
    scanf("%d",&start);
    printf("enter the end:\n");
    scanf("%d",&end);
    printf("Armstrong number are: \n");
    for(num=start;num<=end;num++)
    {
        temp=num;
        sum=0;

        while(temp >0)
        {
            rem=temp%10;
            sum=sum+rem*rem*rem;
            temp=temp/10;
        }
        if(sum==num)
        {
            printf("%d ",num);
        }
    }
    return 0;
}
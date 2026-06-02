# include<stdio.h>
int main()
{
    int n ,num,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n!=0)
    {
        num=n%10;
        sum=sum+num;
        n=n/10;
          }

    printf("Sum of digits is %d",sum);
    return 0;
}
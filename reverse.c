#include<stdio.h>
int main()
{
    int n,num, reverse=0;
    printf("enter the number:");
    scanf("%d",&n);
    while(n>0)
    {
        num=n%10;
        reverse=reverse*10+num;
        n=n/10;
    
        
    }
    printf("%d is the reverse number",reverse);
    return 0;
}
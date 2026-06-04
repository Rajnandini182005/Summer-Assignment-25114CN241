#include<stdio.h>
int main()
{
    int n,num ,original,reverse=0;
    printf("E
    nter the number");
    scanf("%d",&n);
    original=n;
    while(n>0)
    {
        num=n%10;
        reverse=reverse*10+num;
        n=n/10;
    }
    
    if(original==reverse)
    {
        printf("%d is palindrome number",original);
    }
    else
    {
        printf("not palindrome number");
    }
    return 0;
}
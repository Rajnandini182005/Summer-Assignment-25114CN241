#include <stdio.h>
int main()
{
    int n,remainder,original,total=0;
    printf("enter the number\n:");
    scanf("%d",&n);
    original=n;
    while(n!=0)
    {
        remainder=n%10;
        total=total+remainder*remainder*remainder;
        n=n/10;


    }
    if(original==total)
    {
        printf("%d is armstrong number",original);
    }
    else
    {
        printf("%d is not armstrong number",original);
    }
    return 0;
    
}
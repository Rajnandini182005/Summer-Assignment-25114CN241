#include <stdio.h>

int palindrome(int num)
{
    int reverse=0,temp=num;

    while(temp>0)
    {
        reverse=reverse*10+temp%10;
        temp=temp/10;

    }
    return(reverse==num);

}

int main()
{
    int n;
    printf("enter number:");
    scanf("%d",&n);

    if(palindrome(n)){
        printf("%d is the palindrome number.",n);
    }
    else 
    {
        printf("%d is not palindrome number.",n);

    }
    return 0;
}
 
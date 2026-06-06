#include<stdio.h>
#include<stdio.h>
int main()
{
    long long binary;
    int decimal =0,i=0,remainder;
    printf("enter a binary number;\n");
    scanf("%lld",&binary);
     
    while(binary!=0)
    {
        remainder=binary%10;
        decimal=decimal+remainder*pow(2,i);
        binary=binary/10;
        i++;
    }
    printf("decimal=%d",decimal);
    return 0;
}
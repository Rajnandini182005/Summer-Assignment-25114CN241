#include<stdio.h>
int main()
{
    int i,a=0,b=1,c,n;
    printf("enter the limit:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c = a+b;
        a = b;
        b = c;
        printf("%d ",a);
    }
    
    
    return 0;
}
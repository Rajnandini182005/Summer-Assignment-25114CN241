#include <stdio.h>
int main()
{
    int n1,n2,i,lcm;
    printf("enter two numbers");
    scanf("%d %d",&n1,&n2);
    for(i=1;;i++)
    {
        if((n1*i)%n2==0)
        {
            lcm=n1*i;
            break;
        }
    }
    printf("lcm=%d",lcm);
    return 0;
}
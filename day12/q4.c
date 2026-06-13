#include <stdio.h>
 int perfect(int n)
 {
    int i, sum=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        sum =sum+i;


    }
    return(sum==n);


 }

 int main()
 {
    int num;
    printf("enter number:");
    scanf("%d",&num);

    if(perfect(num))
        printf("%d is the perfect number",num);
    
    else
    
        printf("%d is not the perfect number.",num);
    
    return 0;
 }
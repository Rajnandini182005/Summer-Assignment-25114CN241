#include<stdio.h>
int main()
{
    int i,n ,arr[100],odd=0,even=0;
    printf("enter the number of elements:");
    scanf("%d",&n);
     
    printf("enter tne elements:\n",n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        
         if(arr[i]%2==0)
         even++;
         else
         odd++;
    }
            printf("%d =number of even elemnets.\n",even);
            printf("%d=  number of odd elements.\n",odd);

    return 0;  
}
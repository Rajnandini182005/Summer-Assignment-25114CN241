#include <stdio.h>
int main()
{
    int i,n,j,element,maxCount=0,count;
    printf("enter the numbers:");
    scanf("%d",&n);

     int arr[n];
     for(i=0;i<n;i++)
       scanf("%d",&arr[i]);

     for(i=0;i<n;i++) 
     { 
      
        count=1;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            count++;

        }
        if(count>maxCount){
            maxCount=count;
            element=arr[i];

        }
      }
      printf("element=%d\nfrequency=%d",element,maxCount);
       return 0;
    
}
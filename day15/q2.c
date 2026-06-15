#include<stdio.h>
int main()
{
int i,n, temp;
printf("enter size :");
scanf("%d",&n);

int arr[n];
printf("enter the array elements:\n");

for(i=0;i<n;i++)
scanf("%d",&arr[i]);
 temp =arr[0];

  for(i=0;i<n-1;i++)
    arr[i]=arr[i+1];

     arr[n-1]= temp;
   printf("array elements after left rotation:\n");
   
   for(i=0;i<n;i++)
     printf("%d",arr[i]);

   return 0;  
}
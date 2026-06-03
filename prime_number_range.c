#include<stdio.h>
int main()
{
    int i,j,prime_no,start,end;
    printf("enter the starting of range\n:");
    printf("enter the ending of range\n");
    scanf("%d",&start);
    scanf("%d",&end);
    
    for(i=start;i<=end;i++)
    {
      if(i<2)
      continue;
      prime_no=1;
    
    for(j=2;j<i;j++)
    {
        if(i%j==0){
        prime_no=0;
        break;}

    }

if(prime_no)

    printf("%d",i);
}
 return 0;
}
   
          
    

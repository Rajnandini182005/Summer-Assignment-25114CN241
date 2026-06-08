#include<stdio.h>
int sumofdigit(int n)
{
    if(n==0)
    return 0;

    return(n%10)+sumofdigit(n/10);
}
int main(){
 int num;

  printf("Enter the number:\n");
  scanf("%d",&num);

  printf("sum of digit=%d", sumofdigit(num) );
   
  return 0;
}

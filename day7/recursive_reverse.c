#include <stdio.h>
int reversenum = 0;
 void reverse(int n)
 {
    if(n==0)
    return;

    reversenum = reversenum*10+n%10;
    reverse(n/10);
 }
 int main()
 {
    int num =123;
    reverse(num);
    printf("%d=reverse",reversenum);

     return 0;
 }
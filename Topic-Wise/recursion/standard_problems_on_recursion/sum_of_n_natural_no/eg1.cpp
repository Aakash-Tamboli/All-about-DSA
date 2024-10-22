/*
Because Recursion function is easy to write Aakash, First Try to develop
recursive solution then for optimization convert it into loops
*/
#include<stdio.h>

int sum(int n)
{
if(n==0) return 0;
else return sum(n-1)+n;
}
int main()
{
int x=5;
printf("Sum of N(%d) natural No: %d\n",x,sum(x));
return 0;
}

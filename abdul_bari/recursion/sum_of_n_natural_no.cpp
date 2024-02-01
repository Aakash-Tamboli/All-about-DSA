#include<stdio.h>
int fun(int n)
{
if(n>0)
{
return fun(n-1)+n;
}
return 0;
}
int main()
{
int sum=fun(5);
printf("%d\n",sum);
return 0;
}

#include<stdio.h>
int counter;
void printLinearlyFromNToOne(int N)
{
if(N>=counter)
{
printf("%d\n",N);
printLinearlyFromNToOne(N-1);
}
}
int main()
{
counter=1;
printLinearlyFromNToOne(10);
return 0;
}

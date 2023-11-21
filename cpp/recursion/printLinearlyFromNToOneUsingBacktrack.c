#include<stdio.h>
void printLinearlyNToOneUsingBacktrack(int N,int counter)
{
if(N<1)
{
return;
}
printLinearlyNToOneUsingBacktrack(N-1,counter+1);
printf("%d\n",counter);
}

int main()
{
printLinearlyNToOneUsingBacktrack(5,1);
return 0;
}

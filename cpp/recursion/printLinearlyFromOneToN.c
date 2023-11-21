#include<stdio.h>
int counter;
void printLinearlyFromOneToN(int N)
{
if(counter<=N)
{
printf("%d\n",counter);
counter++;
printLinearlyFromOneToN(N);
}
}
int main()
{
counter=1;
printLinearlyFromOneToN(10);
return 0;
}

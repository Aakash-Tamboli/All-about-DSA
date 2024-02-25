#include<stdio.h>
int counter;

/*void printLinearlyFromOneToNBacktracking(int N)
{
if(counter>N)
{
return;
}
printLinearlyFromOneToNBacktracking(N-1);
printf("%d\n",N);
}*/

void printLinearlyFromOneToNBacktracking(int N)
{
// clean code
if(counter<=N)
{
printLinearlyFromOneToNBacktracking(N-1);
printf("%d\n",N);
}
}

int main()
{
counter=1;
printLinearlyFromOneToNBacktracking(10);
return 0;
}

#include<stdio.h>
/*void printFactorialOfN(int N,int answer)
{
if(N==1)
{
printf("%d\n",answer);
return;
}
answer*=N;
printFactorialOfN(N-1,answer);
}*/
int answer;

void printFactorialOfN(int N)
{
if(N==1)
{
printf("Factorial: %d\n",answer);
return;
}
answer*=N;
printFactorialOfN(N-1);
}


int main()
{
answer=1;
printFactorialOfN(5);
return 0;
}

#include<stdio.h>
int findFactorialOfN(int N)
{
int answer;
if(N==1)
{
return N;
}
answer=N*findFactorialOfN(N-1);
return answer;
}
int main()
{
int answer=findFactorialOfN(5);
printf("Factoral ---> %d\n",answer);
return 0;
}

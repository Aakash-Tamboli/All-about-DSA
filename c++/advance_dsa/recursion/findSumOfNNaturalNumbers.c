#include<stdio.h>

int findNNaturalNumber(int N)
{
int answer;
if(N==1)
{
return N;
}
answer=N+findNNaturalNumber(N-1);
return answer;
}

int main()
{
int answer=findNNaturalNumber(3);
printf("Answer: %d\n",answer);
return 0;
}

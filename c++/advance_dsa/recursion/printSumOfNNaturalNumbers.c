#include<stdio.h>
int answer;
// int counter;

/*void printSumOfAllNNaturalNumbers(int N)
{
if(counter==N)
{
answer+=counter;
printf("%d\n",answer);
return;
}
answer+=counter;
counter++;
printSumOfAllNNaturalNumbers(N);
}*/

void printSumOfAllNNaturalNumbers(int N)
{
if(N==1)
{
answer+=N;
printf("Without Counter Variable: %d\n",answer);
return;
}
answer+=N;
printSumOfAllNNaturalNumbers(N-1);
}

int main()
{
answer=0;
// counter=1;
printSumOfAllNNaturalNumbers(3);
return 0;
}

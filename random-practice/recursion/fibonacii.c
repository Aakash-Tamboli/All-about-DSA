#include<stdio.h>
int fibonacii(int nth)
{
int n;
if(nth==0) return 0;
if(nth==1) return 1;
n=fibonacii(nth-2)+fibonacii(nth-1);
return n;
}
int main()
{
int nth;
printf("Enter nth number: ");
scanf("%d",&nth);
int answer=fibonacii(nth);
printf("%dth fibonacii Number: %d\n",nth,answer);
return 0;
}

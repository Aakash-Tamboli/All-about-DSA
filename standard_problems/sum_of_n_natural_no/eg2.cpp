/*
Because eg1.cpp takes Time=O(n) and space is O(n) hence Aakash We can
Optimized space using loops
*/
#include<stdio.h>

int sum(int n)
{
int answer=0;
for(int i=1;i<=n;i++) answer+=i;
return answer;
}

int main()
{
int x=5;
printf("Sum of N(%d) natural no: %d\n",x,sum(x));
return 0;
}

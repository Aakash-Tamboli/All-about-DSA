#include<stdio.h>
#include<vector>
#include<algorithm>
#include<iostream>

using namespace std;

int main()
{
int x[]={6,3,8,10,16,7,5,2,9,14};
int length=sizeof(x)/sizeof(x[0]);
int k=10;

printf("Question is: Find_a_pair_with_sum_k(a+b=k)\n");

printf("Approach 1st: Time O(n^2) Space O(1)\n");

for(int i=0;i<length-1;i++)
{
for(int j=i+1;j<length;j++)
{
if(x[i]+x[j]==k)
{
printf("%d + %d = %d\n",x[i],x[j],k);
}
}
}

return 0;
}

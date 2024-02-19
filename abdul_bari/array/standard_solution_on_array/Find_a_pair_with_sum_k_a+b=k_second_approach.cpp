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
int *tmp;

printf("Question is: Find_a_pair_with_sum_k(a+b=k)\n");

printf("Approach 2nd: Time O(n) Space O(n)\n");

int max=x[0];
for(int i=1;i<length;i++) if(max<x[i]) max=x[i];

tmp=new int[max+1];

for(int i=0;i<length;i++)
{
if(k-x[i]>0 && tmp[k-x[i]]!=0)
{
printf("%d + %d = %d\n",k-x[i],x[i],k);
tmp[x[i]]++;
}
else
{
if(k-x[i]>0) tmp[x[i]]++;
}
}


delete [] tmp;
return 0;
}

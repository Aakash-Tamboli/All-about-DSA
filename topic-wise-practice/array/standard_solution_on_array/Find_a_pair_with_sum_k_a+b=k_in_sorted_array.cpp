#include<stdio.h>
#include<vector>
#include<algorithm>
#include<iostream>

using namespace std;

int main()
{
int x[]={1,3,4,5,6,8,9,10,12,14};
int length=sizeof(x)/sizeof(x[0]);
int i,j;
int k=10;

printf("Question is: Find_a_pair_with_sum_k(a+b=k)_in_sorted_array\n");

printf("Approach: Time O(n) Space O(1)\n");


i=0;
j=length-1;
while(i<j)
{
if(x[i]+x[j]==k) printf("%d + %d = %d\n",x[i++],x[j++],k);
if(x[i]+x[j]>k) j--;
else i++;
}

return 0;
}

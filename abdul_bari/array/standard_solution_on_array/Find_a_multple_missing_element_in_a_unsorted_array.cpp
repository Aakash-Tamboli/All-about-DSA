#include<stdio.h>
#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
int x[]={3,7,4,9,12,6,1,11,2,10};
int length=sizeof(x)/sizeof(x[0]);
int *y;
vector<int> answers;

printf("Question is: Find_a_multple_missing_element_in_a_unsorted_array\n");
printf("Approach 1st: Time: O(n) Space: O(n)\n");
int sum=0; // assume data set start from 0

for(int i=0;i<length;i++)
{
if(sum<x[i]) sum=x[i];
}

y=new int[sum+1];

for(int i=0;i<=sum;i++) y[i]=0;

for(int i=0;i<length;i++) y[x[i]]=1;

for(int i=1;i<=sum;i++)
{
if(y[i]!=1) printf("%d ",i);
}
printf("\n");

delete [] y;

return 0;
}

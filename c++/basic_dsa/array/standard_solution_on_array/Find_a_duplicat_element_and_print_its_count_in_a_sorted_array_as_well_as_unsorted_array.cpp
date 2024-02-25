#include<stdio.h>
#include<vector>
#include<algorithm>
#include<iostream>

using namespace std;

int main()
{
int x[]={3,6,8,8,10,12,15,15,15,20};
int length=sizeof(x)/sizeof(x[0]);
int *tmp;

printf("Question is: Find_a_duplicat_element_and_print_its_count_in_a_sorted_array_as_well_as_unsorted_array\n");

printf("Approach 2nd: Time O(n) Space O(n)\n");

int sum=0;
for(int i=0;i<length;i++) // if array is unsorted otherwise just take last element into sum
{
if(sum<x[i]) sum=x[i];
}

tmp=new int[sum+1];

for(int i=0;i<length;i++)
{
tmp[x[i]]++;
}

for(int i=0;i<=sum;i++)
{
if(tmp[i]!=0 && tmp[i]!=1)
{
printf("%d repeated %d times\n",i,tmp[i]);
}
}

delete [] tmp;
return 0;
}

#include<stdio.h>
#include<vector>
#include<algorithm>
#include<iostream>

using namespace std;

int main()
{
int x[]={5,8,3,9,6,2,10,7,-1,4};
int length=sizeof(x)/sizeof(x[0]);
int i,j;
int k=10;

printf("Question is: Find_max_and_min_in_single_scan\n");

printf("Approach: Time O(n) Space O(1)\n");

int min,max;
min=x[0];
max=min;

for(int i=0;i<length;i++)
{
if(x[i]<min)
{
min=x[i];
}
else if(x[i]>max)
{
max=x[i];
}
}

printf("min = %d , max = %d\n",min,max);

return 0;
}

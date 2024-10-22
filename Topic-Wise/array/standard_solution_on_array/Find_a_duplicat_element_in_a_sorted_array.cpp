#include<stdio.h>
#include<vector>
#include<algorithm>
#include<iostream>

using namespace std;

int main()
{
int x[]={3,6,8,8,10,12,15,15,15,20};
int length=sizeof(x)/sizeof(x[0]);

printf("Question is: Find_a_duplicat_element_in_a_sorted_array\n");

printf("Approach 2nd: Time O(n) Space O(1)\n");

int lastDuplicate=0;

for(int i=0;i<length-1;i++)
{
if(x[i]==x[i+1])
{
if(lastDuplicate!=x[i])
{
lastDuplicate=x[i];
printf("%d ",x[i]);
}
}
}

printf("\n");

return 0;
}

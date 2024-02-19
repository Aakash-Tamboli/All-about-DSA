#include<stdio.h>
#include<vector>
#include<algorithm>
#include<iostream>

using namespace std;

int main()
{
int x[]={3,6,8,8,10,12,15,15,15,20};
int length=sizeof(x)/sizeof(x[0]);
int j;

printf("Question is: Find_a_duplicat_element_and_print_its_count_in_a_sorted_array\n");

printf("Approach 2nd: Time O(n) Space O(1)\n");


for(int i=0;i<length-1;i++)
{
if(x[i]==x[i+1])
{
j=i+1;
while(x[i]==x[j]) j++;
printf("%d is repated %d times\n",x[i],j-i);
i=j-1;
}
}


return 0;
}

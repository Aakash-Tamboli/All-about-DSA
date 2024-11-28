#include<stdio.h>
int main()
{
int x[]={1,2,3,4,5,6,8,9,10,11,12};
int length=sizeof(x)/sizeof(x[0]);

printf("Question is: Find_a_single_missing_element_in_a_sorted_array_where_array_content_start_1_to_onwards\n");

int N=x[length-1];

N=N*(N+1)/2;

int sum=0;

for(int i=0;i<length;i++) sum=sum+x[i];

int answer=N-sum;
printf("The missing element is: %d\n",answer);
return 0;
}

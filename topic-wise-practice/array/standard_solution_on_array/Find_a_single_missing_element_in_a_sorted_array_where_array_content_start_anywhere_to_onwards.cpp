#include<stdio.h>
int main()
{
int x[]={6,8,9,10,11,13,14,15,16,18};
int length=sizeof(x)/sizeof(x[0]);

printf("Question is: Find_a_single_missing_element_in_a_sorted_array_where_array_content_start_anywhere_to_onwards\n");

int difference=x[0]-0;

int answer=-1;
for(int i=1;i<length;i++){
if(x[i]-i!=difference)
{
answer=difference+difference;
}
}

printf("The missing element is: %d\n",answer);
return 0;
}

#include<stdio.h>
#include<vector>
#include<iostream>

using namespace std;

int main()
{
int x[]={6,7,8,9,11,12,15,16,17,18,19};
int length=sizeof(x)/sizeof(x[0]);
vector<int> answers;

printf("Question is: Find_a_multple_missing_element_in_a_sorted_array_where_array_content_start_anywhere_to_onwards\n");

int difference=x[0]-0;

for(int i=0;i<length;i++)
{
if(x[i]-i!=difference)
{
while(x[i]-i>difference)
{
answers.push_back(i+difference);
difference++;
}
}
}

for(auto elem: answers)
{
cout<<elem<<" ";
}
cout<<endl;

return 0;
}

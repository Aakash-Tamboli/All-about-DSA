#include<iostream>
#include<set>
#include<vector>
using namespace std;
void printAllSubSequences(int *arr,int length)
{
set<int> s;
vector<int> v;
int e,f,i;
for(e=0;e<length;e++)
{
if(s.find(arr[e])!=s.end()) continue;
s.clear();
i=e;
v.push_back(arr[i]);
for(f=e+1;f<length;f++)
{
if(arr[i]<arr[f])
{
i=f;
v.push_back(arr[i]);
s.insert(arr[i]);
}
}
if(e==f)
{
v.clear();
continue;
}
for(auto elem: v)
{
cout<<elem<<" ";
}
v.clear();
cout<<endl;
}
}
int main()
{
int arr[]={12,3,92,-3,76,54,12,93,78};
int length=sizeof(arr)/sizeof(arr[0]);
printAllSubSequences(arr,length);
return 0;
}

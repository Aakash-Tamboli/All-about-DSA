#include<iostream>
#include<set>
#include<vector>
#include<utility>
using namespace std;

void print(vector<pair<int,int>> &v,int *arr)
{
int tmp;
for(auto &p: v)
{
tmp=arr[p.first];
cout<<tmp<<" ";
for(int ii=p.first+1;ii<=p.second;ii++)
{
if(tmp<arr[ii])
{
tmp=arr[ii];
cout<<tmp<<" ";
}
}
cout<<endl;
}
}

void printAllSubSequences(int *arr,int length)
{
set<int> s;
vector<pair<int,int>> v;
int e,f,i,si,ei;
for(e=0;e<length;e++)
{
if(s.find(arr[e])!=s.end()) continue;
s.clear();
ei=si=i=e;
s.insert(arr[e]);
for(f=e+1;f<length;f++)
{
if(arr[i]<arr[f])
{
ei=i=f;
s.insert(arr[i]);
}
}
if(si==ei)
{
s.clear();
continue;
}
v.emplace_back(si,ei);
}
print(v,arr);
}
int main()
{
int arr[]={12,3,92,-3,76,54,12,93,78};
int length=sizeof(arr)/sizeof(arr[0]);
printAllSubSequences(arr,length);
return 0;
}

// stock span problem
#include<bits/stdc++.h>
using namespace std;

vector<int> bruteForce(int *arr,int n)
{
int count;
vector<int> v;
for(int i=0;i<n;i++)
{
count=1;
for(int j=i-1;j>=0;j--)
{
if(arr[j]>arr[i]) break;
count++;
}
v.push_back(count);
}
return v;
}

vector<int> optimizeApproach(int *arr,int n)
{
stack<pair<int,int>> s;
vector<int> v1,v2;

for(int i=0;i<n;i++)
{
if(s.size()==0)
{
v1.push_back(-1);
}
else if(s.size()>0 && s.top().first>arr[i])
{
v1.push_back(s.top().second);
}
else
{
while(s.size()>0 && s.top().first<=arr[i]) s.pop();
if(s.size()==0) v1.push_back(-1);
else v1.push_back(s.top().second);
}
s.push({arr[i],i});
}
for(int i=0;i<n;i++) v2.push_back(i-v1[i]);
return v2;
}

int main()
{
int arr[]={100,80,60,70,60,75,85};
int size=sizeof(arr)/sizeof(arr[0]);
vector<int> v;
v=optimizeApproach(arr,size);
for(int elem: v)
{
cout<<elem<<" ";
}
cout<<endl;
return 0;
}

// Nearest Greater to right
#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>

using namespace std;

vector<int> bruteForce(int *arr,int size)
{
vector<int> v;
int i,j;
for(i=0;i<size-1;i++)
{
for(j=i+1;j<size;j++)
{
if(arr[i]<arr[j])
{
v.push_back(arr[j]);
break;
}
}
if(j==size) v.push_back(-1);
}
v.push_back(-1);
return v;
}

vector<int> optimizeApproach(int *arr,int size)
{
stack<int> s;
vector<int> v;
for(int i=size-1;i>=0;i--)
{
if(s.size()==0)
{
v.push_back(-1);
}
else if(s.size()>0 && s.top()>arr[i])
{
v.push_back(s.top());
}
else
{
while(s.size()>0 && arr[i]>=s.top()) s.pop();
if(s.size()==0) v.push_back(-1);
else v.push_back(s.top());
}
s.push(arr[i]);
}
reverse(v.begin(),v.end());
return v;
}

int main()
{
int arr[]={1,3,2,4};
int size=sizeof(arr)/sizeof(arr[0]);
vector<int> ans;
ans=optimizeApproach(arr,size);
int i=0;
for(auto elem: ans)
{
cout<<arr[i]<<" "<<elem<<endl;
i++;
}
cout<<endl;
return 0;
}

#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>

using namespace std;
int main()
{
int arr[]={13,7,6,12};
int n=sizeof(arr)/sizeof(arr[0]);
int i,j;
stack<int> stk;
vector<int> v;
for(i=n-1;i>=0;i--)
{
if(stk.empty())
{
v.push_back(-1);
stk.push(arr[i]);
}
else if(arr[i]<stk.top())
{
v.push_back(stk.top());
stk.push(arr[i]);
}
else
{
while(!stk.empty())
{
if(arr[i]<stk.top())
{
v.push_back(stk.top());
stk.push(arr[i]);
break;
}
stk.pop();
}
if(stk.empty())
{
v.push_back(-1);
stk.push(arr[i]);
}
}
}

reverse(v.begin(),v.end());

for(auto data: v)
{
cout<<data<<" ";
}


return 0;
}

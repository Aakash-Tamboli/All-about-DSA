// Neareset Smaller to right
#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> optimizedApproach(int *arr,int size)
{
stack<int> s;
vector<int> v;
for(int i=size-1;i>=0;i--)
{
if(s.size()==0)
{
v.push_back(-1);
}
else if(s.size()>0 && s.top()<arr[i])
{
v.push_back(s.top());
}
else
{
while(s.size()>0 && s.top()>=arr[i]) s.pop();
if(s.size()==0) v.push_back(-1);
else v.push_back(s.top());
}
s.push(arr[i]);
}
reverse(v.begin(),v.end());
return v;
}

vector<int> bruteForce(int *arr,int size)
{
int j;
vector<int> v;
for(int i=0;i<size-1;i++)
{
for(j=i+1;j<size;j++)
{
if(arr[j]<arr[i])
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


int main()
{
int arr[]={4,5,2,10,8};
int size=sizeof(arr)/sizeof(arr[0]);
vector<int> v;
// v=bruteForce(arr,size);
v=optimizedApproach(arr,size);
for(auto elem: v)
{
cout<<elem<<" ";
}
cout<<endl;
return 0;
}

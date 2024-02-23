// Nearest Greater to Left
#include<iostream>
#include<stack>
#include<algorithm>

using namespace std;

vector<int> optimizedApproach(int *arr,int size)
{
vector<int> v;
stack<int> s;

for(int i=0;i<size;i++)
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
while(s.size()>0 && s.top()<=arr[i]) s.pop();
if(s.size()==0) v.push_back(-1);
else v.push_back(s.top());
}
s.push(arr[i]);
}
return v;
}



vector<int> bruteForce(int *arr,int size)
{
int j;
vector<int> v;
for(int i=0;i<size;i++)
{
for(j=i-1;j>=0;j--)
{
if(arr[j]>arr[i])
{
v.push_back(arr[j]);
break;
}
}
if(j==-1) v.push_back(-1);
}
return v;
}

int main()
{
int arr[]={1,3,2,4};
int size=sizeof(arr)/sizeof(arr[0]);
vector<int> v;
//v=bruteForce(arr,size);
v=optimizedApproach(arr,size);
for(auto elem: v)
{
cout<<elem<<" ";
}
cout<<endl;
return 0;
}


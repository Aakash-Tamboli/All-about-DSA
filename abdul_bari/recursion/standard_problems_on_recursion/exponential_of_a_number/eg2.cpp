/*
Time=O(n)
Space=O(1)
*/

#include<iostream>
using namespace std;

int expo(int m,int n)
{
int ans=m;
for(int i=1;i<n;i++) ans=ans*m;
return ans;
}

int main()
{
int m,n;
m=2;
n=5;
cout<<m<<"^"<<n<<"="<<expo(m,n)<<endl;
m=2;
n=4;
cout<<m<<"^"<<n<<"="<<expo(m,n)<<endl;
return 0;
}

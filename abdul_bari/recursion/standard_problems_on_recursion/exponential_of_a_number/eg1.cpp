/*
Time=O(n)
Span=O(n)

*/

#include<iostream>
using namespace std;

int expo(int m,int n)
{
if(n<=0) return 1;
else return expo(m,n-1)*m;
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

/*
Time=O(log n)
Space=O(log n)
*/

#include<iostream>
using namespace std;

int expo(int m,int n)
{
if(n<=1) return 1;
if(n%2==0) return expo(m,n/2)*(m*m);
else return expo(m,n/2)*(m*m*m);
}

int main()
{
int m,n;
m=2;
n=5;
cout<<m<<"^"<<n<<"="<<expo(m,n)<<endl;
return 0;
}

/*
Time=O(n)
Space=O(1)
*/

#include<iostream>
using namespace std;

int fibonacci(int n)
{
int zeroTh=0;
int first=1;
if(n==0) return zeroTh;
else if(n==1) return first;
int answer=0;
for(int i=2;i<=n;i++)
{
answer=zeroTh+first;
zeroTh=first;
first=answer;
}
return answer;
}

int main()
{
cout<<fibonacci(6)<<endl;
return 0;
}

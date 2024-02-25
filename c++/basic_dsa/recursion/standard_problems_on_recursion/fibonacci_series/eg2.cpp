/*
Using Memoization,
it is technique to avoid excessive recursive calls, which are already made.
*/

#include<iostream>
using namespace std;

int x[100]={0};
int fibonacci(int n)
{
if(n==0 || n==1) return n;
else if(x[n]!=0) return x[n];
x[n]=fibonacci(n-2)+fibonacci(n-1);
return x[n];
}

int main()
{
cout<<fibonacci(7)<<endl;
return 0;
}

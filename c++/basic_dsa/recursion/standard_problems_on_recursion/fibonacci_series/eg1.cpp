/*
Time=O(2^n)
Space=O(2^n)
*/

#include<iostream>
using namespace std;

int fibonacci(int n)
{
if(n==0 || n==1) return n;
else return fibonacci(n-2)+fibonacci(n-1);
}

int main()
{
cout<<fibonacci(6)<<endl;
return 0;
}

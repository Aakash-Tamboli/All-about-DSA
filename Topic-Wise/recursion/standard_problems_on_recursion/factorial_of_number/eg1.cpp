/*
Time=O(n)
Space=O(n)

*/

#include<iostream>
using namespace std;

int factorial(int n)
{
// if(n==0 || n==1) return 1; this will fail when n is -ve
if(n<=1) return 1;
else return factorial(n-1)*n;
}

int main()
{
int n=5;
cout<<factorial(n)<<endl;
return 0;
}

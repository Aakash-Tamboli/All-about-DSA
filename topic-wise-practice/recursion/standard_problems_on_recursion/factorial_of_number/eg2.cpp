/*
Time=O(n)
Space=O(1)
*/

#include<iostream>
using namespace std;

int factorial(int n)
{
int fact=1;
for(int i=1;i<=n;i++)
{
fact*=i;
}
return fact;
}

int main()
{
int n=5;
cout<<factorial(n)<<endl;
cout<<factorial(-1)<<endl;
return 0;
}

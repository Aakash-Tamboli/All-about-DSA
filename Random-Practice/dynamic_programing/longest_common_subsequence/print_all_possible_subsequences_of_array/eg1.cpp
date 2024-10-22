#include<stdio.h>
#include<iostream>
#include<math.h>



using namespace std;

int main()
{
char x[]={"abcd"};
int size=4;
int upperBound=size-1;
int k=pow(2,size)-1;
int i,tmp;

while(k>0)
{
i=size-1;
tmp=k;
while(i>=0)
{
if(((tmp>>i)&1)) cout<<x[upperBound-i];
i--;
}
cout<<endl;
k--;
}
return 0;
}

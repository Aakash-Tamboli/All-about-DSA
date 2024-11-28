#include<stdio.h>
#include<iostream>
#include<math.h>



using namespace std;

int main()
{
char x[]={"abcd"};
int size=4;
int k=pow(2,size)-1;
int i,j;

while(k>0)
{
i=size-1;
j=0;
while(i>=0)
{
if(((k>>i)&1)) cout<<x[j];
j++;
i--;
}
cout<<endl;
k--;
}
return 0;
}

#include<stdio.h>
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
char x[]={"abcd"};
char tmp1[4];
int tmp1i;
char y[]={"abd"};
char tmp2[3];
int tmp2i;

int sizeX=4;
int sizeY=3;

int upperBoundX=sizeX-1;
int k1=pow(2,sizeX)-1;

int upperBoundY=sizeY-1;
int k2=pow(2,sizeY)-1;
int j=k2;
int i,tmp;
int maxSS;


maxSS=0;

while(k1>0)
{
i=sizeX-1;
tmp=k1;
tmp1i=0;
while(i>=0)
{
if(((tmp>>i)&1)) tmp1[tmp1i++]=x[upperBoundX-i];
i--;
}
// one sequence is generated from first second array
k2=j;
while(k2>0)
{
i=sizeY-1;
tmp=k2;
tmp2i=0;
while(i>=0)
{
if(((tmp>>i)&1)) tmp2[tmp2i++]=y[upperBoundY-i];
i--;
}
// another one second sequence is generated from second array
if(tmp1i==tmp2i && tmp1i>maxSS)
{
for(i=0;i<tmp1i;i++) if(tmp1[i]!=tmp2[i]) break;
if(i==tmp1i)
{
maxSS=tmp1i;
break; 
}
}
k2--;
}
k1--;
}
cout<<"LCS is: "<<maxSS<<endl;
return 0;
}

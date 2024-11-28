#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
int x[9]={12,3,92,-3,76,54,12,93,78};
int m[9]={1};
int e,f,maxSS;

printf("The Sequence is: ");
for(e=0;e<=8;e++) printf("%3d ",x[e]);
printf("\n");
printf("The Indexes is:  ");
for(e=0;e<=8;e++) printf("%3d ",e);
printf("\n\n");

maxSS;
e=0;
f=e+1;
while(f<=8)
{
if(e==f)
{
e=0;
f++;
continue;
}
if(x[f]>x[e] && m[e]+1>m[f])
{
m[f]=m[e]+1;
if(maxSS<m[f]) maxSS=m[f];
}
e++;
}
cout<<"LIS is: "<<maxSS<<endl;
return 0;
}

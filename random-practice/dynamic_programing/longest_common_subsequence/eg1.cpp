#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
int x[9]={12,3,92,-3,76,54,12,93,78};
int flags[9]={0};
int e,f,prev,noel;
cout<<"The Sequence is: ";
for(e=0;e<=8;e++) printf("%3d ",x[e]);
cout<<endl;
cout<<"The Indexes is:  ";
for(e=0;e<=8;e++) printf("%3d ",e);
printf("\n\n");

for(e=0;e<=7;e++)
{
if(flags[e]) continue;
noel=0;
prev=e;
for(f=e+1;f<=8;f++)
{
if(x[f]>x[prev])
{
printf("%d ",x[prev]);
noel++;
prev=f;
flags[f]=1;
}
}
if(prev>e)
{
printf("%d\n",x[prev]);
noel++;
printf("The Above %d sequence from %d to %d\n",noel,e,prev);
}
}
return 0;
}

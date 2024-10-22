#include<stdio.h>
#include<iostream>
#include<forward_list>
#include<utility>
using namespace std;
int main()
{
int x[9]={12,3,92,-3,76,54,12,93,78};
int flags[9]={0};
int e,f,prev,noel,maxSS;
forward_list<pair<int,int>> list;
printf("The Sequence is: ");
for(e=0;e<=8;e++) printf("%d ",x[e]);
printf("\n");
printf("The Indexes is:  ");
for(e=0;e<=8;e++) printf("%d ",e);
printf("\n\n");
maxSS=0;
for(e=0;e<=7;e++)
{
if(flags[e]) continue;
noel=0;
prev=e;
for(f=e+1;f<=8;f++)
{
if(x[f]>x[prev])
{
noel++;
prev=f;
flags[f]=1;
}
}
if(prev>e)
{
noel++;
if(noel<maxSS) continue;
if(noel>maxSS)
{
maxSS=noel;
list.clear();
}
list.push_front(pair<int,int>(e,prev));
}
}

// now our ds is Ready
for(auto p:list)
{
printf("(%d,%d)\n",p.first,p.second);
prev=p.first;
for(f=p.first+1;f<=p.second;f++)
{
if(x[f]>x[prev])
{
cout<<x[prev]<<" ";
prev=f;
}
}
cout<<x[prev];
cout<<endl;
}


return 0;
}

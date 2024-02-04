#include<iostream>
#include<stdio.h>
#include<queue>
#include<utility>
using namespace std;
int main()
{
int x[9]={12,3,92,-3,76,54,12,93,78};
int flags[9]={0};
int e,f,prev,noel,maxSS;
queue<queue<pair<int,int>>> q;
printf("The Sequence is: ");
for(e=0;e<=8;e++) printf("%3d ",x[e]);
printf("\n");
printf("The Indexes is:  ");
for(e=0;e<=8;e++) printf("%3d ",e);
printf("\n\n");

maxSS=0;
for(e=0;e<=7;e++)
{
if(flags[e]) continue;
prev=e;
noel=0;
queue<pair<int,int>> iq; // inner queue
for(f=e+1;f<=8;f++)
{
if(x[f]>x[prev])
{
iq.push(pair<int,int>(x[prev],prev));
noel++;
flags[f]=1;
prev=f;
}
}
if(prev>e)
{
noel++;
if(noel<maxSS) continue;
if(noel>maxSS)
{
maxSS=noel;
while(q.empty()==false) q.pop();
}
iq.push(pair<int,int>(x[prev],prev));
q.push(iq);
}
}
// now our ds is ready
while(q.empty()==false)
{
queue<pair<int,int>> iq=q.front();
q.pop();
cout<<"----------------------------------------"<<endl;
while(iq.empty()==false)
{
pair<int,int> p=iq.front();
iq.pop();
cout<<p.first<<" "<<p.second<<endl;
}
cout<<"----------------------------------------"<<endl;
}
return 0;
}

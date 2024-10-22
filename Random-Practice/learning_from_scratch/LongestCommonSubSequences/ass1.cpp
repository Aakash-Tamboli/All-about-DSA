#include<iostream>
#include<utility>
#include<vector>
using namespace std;

void printAllSubSequences(int *x,int size)
{
int e,f,i,si,ei,prevCount,count;
vector<pair<pair<int,int>,int>> v;
// {{startIndex,endIndex},No_Of_Count}
prevCount=1;
for(e=0;e<size;e++)
{
i=e;
count=1;
for(f=e+1;f<size;f++)
{
if(x[i]<x[f])
{
i=f;
count++;
}
} // inner loop
if(e!=i)
{
v.push_back(pair<pair<int,int>,int>(pair<int,int>(e,i),count));
if(prevCount<count) prevCount=count;
}
}// outer loop

if(v.size()==0)
{
cout<<-1<<endl;
return;
}

for(e=0;e<v.size();e++)
{
i=si=v[e].first.first;
ei=v[e].first.second;
if(v[e].second!=prevCount) continue;
cout<<x[si++]<<" ";
while(si<=ei)
{
if(x[i]<x[si])
{
i=si;
cout<<x[i]<<" ";
}
si++;
}
cout<<"\n********************************"<<endl;
}
} // function ends

int main()
{
//int x[]={2,-3,9,7,52};
int x[]={5,4,3,2,1};
int size=sizeof(x)/sizeof(x[0]);
printAllSubSequences(x,size);
return 0;
}

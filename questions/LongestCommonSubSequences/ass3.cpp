#include<iostream>
#include<utility>
#include<vector>
using namespace std;
pair<int,vector<vector<int>>> subSequences(int *x,int size)
{
int e,f,i,prevCount,count;
pair<int,vector<vector<int>>> p;
vector<vector<int>> v;
vector<int> tmp;
prevCount=0;
for(e=0;e<size;e++)
{
i=e;
count=1;
for(f=e+1;f<size;f++)
{
if(x[i]<x[f])
{
tmp.push_back(x[i]);
i=f;
count++;
}
} // inner loop

if(e!=i)
{
tmp.push_back(x[i]); // accomodate last element found in sub-sequence
v.push_back(vector<int>(tmp));
tmp.clear();
if(prevCount<count) prevCount=count;
}
}// outer loop
p.first=prevCount;
p.second=v;
return p;
}

void printAllSubSequencesWhichAreCommon(int *x,int size1,int *y,int size2)
{
pair<int,vector<vector<int>>> p1=subSequences(x,size1);
pair<int,vector<vector<int>>> p2=subSequences(y,size2);
int lsl; // longest-subsequence length
vector<vector<int>> v1,v2,answers;
vector<int> t1,t2;
bool found;
cout<<p1.first<<","<<p2.first<<endl;
if(p1.first==0 || p2.first==0 || p1.first!=p2.first)
{
cout<<-1<<endl;
return;
}
lsl=p1.first;
v1=p1.second;
v2=p2.second;
for(int e=0;e<v1.size();e++)
{
if(lsl!=v1[e].size()) continue;
t1=v1[e];
for(int f=0;f<v2.size();f++)
{
if(t1.size()==v2[f].size()) // first both should be equals in interms of length of subsequences
{
t2=v2[f];
found=true;  // initally I presume that I found It
for(int g=0;g<v2.size();g++)
{
if(t1[g]!=t2[g])
{
found=false;
break;
}
}
if(found) answers.push_back(t1);
}
} // inner loop
} // outer loop

if(answers.size()==0)
{
cout<<-1<<endl;
return;
}

for(auto &v: answers)
{
for(auto elem: v) cout<<elem<<" ";
cout<<endl;
}

} // function ends

int main()
{
int x[]={2,1,5,7};
int y[]={2,7,5};
int size1=sizeof(x)/sizeof(x[0]);
int size2=sizeof(y)/sizeof(y[0]);
printAllSubSequencesWhichAreCommon(x,size1,y,size2);
return 0;
}

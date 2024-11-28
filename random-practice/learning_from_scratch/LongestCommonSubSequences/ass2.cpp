#include<iostream>
#include<utility>
#include<vector>
using namespace std;
vector<vector<int>> subSequences(int *x,int size)
{
int e,f,i,si,ei;
vector<vector<int>> v;
vector<int> tmp;
for(e=0;e<size;e++)
{
i=e;
for(f=e+1;f<size;f++)
{
if(x[i]<x[f])
{
tmp.push_back(x[i]);
i=f;
}
} // inner loop

if(e!=i)
{
tmp.push_back(x[i]); // accomodate last element found in sub-sequence
v.push_back(vector<int>(tmp));
tmp.clear();
}
}// outer loop
return v;
}

void printAllSubSequencesWhichAreCommon(int *x,int size1,int *y,int size2)
{
vector<vector<int>> v1=subSequences(x,size1);
vector<vector<int>> v2=subSequences(y,size2);
vector<vector<int>> answers;
vector<int> t1,t2;
bool found;
// cout<<v1.size()<<endl;
// cout<<v2.size()<<endl;

for(int e=0;e<v1.size();e++)
{
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
int y[]={10};
int size1=sizeof(x)/sizeof(x[0]);
int size2=sizeof(y)/sizeof(y[0]);
printAllSubSequencesWhichAreCommon(x,size1,y,size2);
return 0;
}

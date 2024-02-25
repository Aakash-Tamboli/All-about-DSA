#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
int x[9]={12,3,92,-3,76,54,12,93,78};
int max[9]={1};
cout<<"The Sequence/Collection is: ";
for(int i=0;i<=8;i++) printf("%3d ",x[i]);
cout<<endl;
cout<<"The Indexes is:             ";
for(int i=0;i<=8;i++) printf("%3d ",i);
cout<<endl;

int e,f;
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
if(x[f]>x[e] && max[e]+1>max[f]) max[f]=max[e]+1;
e++;
}

int largest=max[0];
for(int i=1;i<=8;i++) if(max[i]>largest) largest=max[i];

cout<<"LIS: "<<largest<<endl;

return 0;
}

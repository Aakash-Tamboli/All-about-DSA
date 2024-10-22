#include<stdio.h>
#include<utility>
#include<iostream>

#include "common.c"

using namespace std;

pair<int,int> ds={-1,-1};

int linearSearch(int *x,int length,int key)
{
if(ds.first!=-1 && ds.second==key)
{
printf("Best Case Optimized\n");
return ds.first;
}
int found=-1;
for(int i=0;i<length;i++)
{
if(key==x[i])
{
found=i;
ds.first=found;
ds.second=key;
break;
}
}
return found;
}


int main()
{
int x[]={2,1,8,21,4};
int length=sizeof(x)/sizeof(x[0]);
int key=4;
int found=linearSearch(x,length,key);
if(found!=-1) printf("%d is found at %d\n",key,found);
else printf("%d does not found in array\n",key);
found=linearSearch(x,length,key);
if(found!=-1) printf("%d is found at %d\n",key,found);
else printf("%d does not found in array\n",key);


return 0;
}

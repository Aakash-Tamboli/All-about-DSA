#include<stdio.h>
#include<utility>
#include<iostream>
#include "common.c"

using namespace std;


int linearSearch(int *x,int length,int key)
{
int found=-1;
int tmp;
for(int i=0;i<length;i++)
{
if(key==x[i])
{
found=i;
if((i-1)>0)
{
tmp=x[i];
x[i]=x[i-1];
x[i-1]=tmp;
}
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

#include<stdio.h>
#include "common.c"
int linearSearch(int *x,int length,int key)
{
int found=-1;
for(int i=0;i<length;i++)
{
if(key==x[i])
{
found=i;
break;
}
}
return found;
}


int main()
{
int x[]={2,3,4,5,6,7};
int length=sizeof(x)/sizeof(x[0]);
int key=5;
printArrayWithIndices(x,length);
int found=linearSearch(x,length,key);
if(found==-1) printf("%d is found\n",key);
else printf("%d is found at %d\n",key,found);
complexity("O(n)","O(1)");
return 0;
}

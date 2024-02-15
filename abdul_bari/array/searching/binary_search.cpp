#include<stdio.h>
#include "common.c"

// for binary search collection/array should be sorted

int binarySearch(int *x,int length,int key)
{
int mid;
int startingIndex,endingIndex;
startingIndex=0;
endingIndex=length-1;
while(startingIndex<=endingIndex)
{
mid=startingIndex+(endingIndex-startingIndex)/2;
if(x[mid]==key) return mid;
if(key<x[mid])
{
endingIndex=mid-1;
}
else
{
startingIndex=mid+1;
}
}
return -1;
}


int main()
{
int x[]={2,3,4,5,6,7};
int length=sizeof(x)/sizeof(x[0]);
int key=5;
printArrayWithIndices(x,length);
int found=binarySearch(x,length,key);
if(found==-1) printf("%d is found\n",key);
else printf("%d is found at %d\n",key,found);
complexity("O(log n)","O(1)");
return 0;
}

#include<stdio.h>

void reversingAnArrayInOptimized(int *arr,int left,int right)
{
int g;
if(left>=right)
{
return;
}
g=arr[left];
arr[left]=arr[right];
arr[right]=g;
reversingAnArrayInOptimized(arr,left+1,right-1);
}

void reversingAnArray(int *arr,int size)
{
reversingAnArrayInOptimized(arr,0,size-1);
}

int main()
{
int size=10;
int arr[10]={1,2,3,4,5,6,7,8,9,10};
reversingAnArray(arr,size);
for(int i=0;i<size;i++) printf("%d ",arr[i]);
printf("\n");
return 0;
}

#include<stdio.h>
int binarySearch(int target,int start,int end,int *arr)
{
int mid,ans;
if(start>end)
{
return -1;
}
mid=start+(end-start)/2;
if(target==arr[mid])
{
ans=mid;
}
else if(target>arr[mid])
{
ans=binarySearch(target,mid+1,end,arr);
}
else
{
ans=binarySearch(target,start,end-1,arr);
}
return ans;
}

int main()
{
int arr[10]={2,3,5,7,15,22,23,45,100,150};
int target=-100;
int answer=binarySearch(target,0,9,arr);
if(answer==-1)
{
printf("%d is not Exists in array\n",target);
}
else
{
printf("%d is Exists in index: %d\n",target,answer);
}
return 0;
}

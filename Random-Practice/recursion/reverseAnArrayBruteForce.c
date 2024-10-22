#include<stdio.h>

void copyContentOfAnArrayToAnotherArray(int *target,int *src,int size,int index,int populateTmpArray)
{
if(index==size)
{
return;
}
if(populateTmpArray)
{
target[index]=src[(size-index)-1];
}
else
{
target[index]=src[index];
}
copyContentOfAnArrayToAnotherArray(target,src,size,index+1,populateTmpArray);
}

void reverseAnArrayBruteForce(int *arr,int *tmp,int size)
{
copyContentOfAnArrayToAnotherArray(tmp,arr,size,0,1);
copyContentOfAnArrayToAnotherArray(arr,tmp,size,0,0);
}
int main()
{
int tmp[5];
int size=5;
int arr[5]={1,2,3,4,5};
reverseAnArrayBruteForce(arr,tmp,size);
for(int i=0;i<size;i++) printf("%d ",arr[i]);
printf("\n");
return 0;
}

// Time Complexity O(n^2)
#include<iostream>
using namespace std;
int main()
{
int arr[]={13,7,6,12};
int n=sizeof(arr)/sizeof(arr[0]);
int i,j;
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(arr[i]<arr[j])
{
break;
}
}
if(j<n) printf("%d ",arr[j]);
else printf("%d ",-1);
}
printf("\n");
return 0;
}

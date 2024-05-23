#include<stdio.h>
#include "sortingAlgo.c"

int main()
{
int x[]={10,9,8,7,6,5,4,3,2,1};
int length=sizeof(x)/sizeof(x[0]);
int lb=0;
int ub=length-1;


printf("Before Sorting: ");
for(int i=lb;i<=ub;i++) printf("%2d ",x[i]);
printf("\n");

bubbleSort(x,lb,ub);

printf("After Sorting : ");
for(int i=lb;i<=ub;i++) printf("%2d ",x[i]);
printf("\n");

return 0;
}

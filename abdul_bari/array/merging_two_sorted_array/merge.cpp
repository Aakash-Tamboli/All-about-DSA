#include<stdio.h>
#include "common.c"


int x[]={1,2,3,4,5};
int lengthOfX=5;
int y[]={6,7,8,9,10};
int lengthOfY=5;
int z[10];

void mergeTwoSortedArray()
{
int i,j,k;
i=0;
j=0;
k=0;
while(i<lengthOfX && j<lengthOfY)
{
if(x[i]<y[j])
{
z[k]=x[i];
i++;
}
else
{
z[k]=y[j];
j++;
}
k++;
}

while(i<lengthOfX)
{
z[k]=x[i];
k++;
i++;
}

while(j<lengthOfY)
{
z[k]=y[j];
k++;
j++;
}

}


int main()
{
mergeTwoSortedArray();
printArrayWithIndices(z,10);
return 0;
}

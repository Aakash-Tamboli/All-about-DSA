#include<stdio.h>
int A[]={3,5,10,4,6};
int lengthA=5;
int B[]={12,4,7,2,5};
int lengthB=5;
int C[10];

void applyDifferenceOperation()
{
// A-B
int k=0;
int elem,found;
for(int i=0;i<lengthA;i++)
{
elem=A[i];
found=0;
for(int j=0;j<lengthB;j++)
{
if(elem==B[j])
{
found=1;
break;
}
}
if(!found) C[k++]=A[i];
}
}

int main()
{
applyDifferenceOperation();
for(int i=0;i<10;i++) printf("%d ",C[i]);
printf("\n");
return 0;
}

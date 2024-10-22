#include<stdio.h>
int A[]={3,5,10,4,6};
int lengthA=5;
int B[]={12,4,7,2,5};
int lengthB=5;
int C[10];

void applyIntersectionOperation()
{
int i,j,k=0;
for(i=0;i<lengthA;i++)
{
for(j=0;j<lengthB;j++)
{
if(A[i]==B[j]) break;
}
if(j<lengthB) C[k++]=A[i];
}
}

int main()
{
applyIntersectionOperation();
for(int i=0;i<10;i++) printf("%d ",C[i]);
printf("\n");
return 0;
}

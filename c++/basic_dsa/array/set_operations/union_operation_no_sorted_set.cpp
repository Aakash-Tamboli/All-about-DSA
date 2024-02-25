#include<stdio.h>
int A[]={3,5,10,4,6};
int lengthA=5;
int B[]={12,4,7,2,5};
int lengthB=5;
int C[10];

void applyUnionOperation()
{
int k=0;
int elem,found;
for(int i=0;i<lengthA;i++) C[k++]=A[i];

for(int i=0;i<lengthB;i++)
{
elem=B[i];
found=0;
for(int j=0;j<k;j++)
{
if(elem==C[j])
{
found=1;
break;
}
}
if(!found) C[k++]=B[i];
}
}

int main()
{
applyUnionOperation();
for(int i=0;i<10;i++) printf("%d ",C[i]);
printf("\n");
return 0;
}

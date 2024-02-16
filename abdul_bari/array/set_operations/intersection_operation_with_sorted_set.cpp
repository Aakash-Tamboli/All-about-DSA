#include<stdio.h>
int A[]={3,4,5,6,10};
int lengthA=5;
int B[]={2,4,5,7,12};
int lengthB=5;
int C[10];

void applyIntersectionOperation()
{
int i,j,k;
i=0;
j=0;
k=0;
while(i<lengthA && j<lengthB)
{
if(A[i]==B[j])
{
C[k]=A[i];
i++;
j++;
k++;
}
else if(A[i]<B[j]) i++;
else j++;
}
}
int main()
{
applyIntersectionOperation();
for(int i=0;i<10;i++) printf("%d ",C[i]);
printf("\n");
return 0;
}

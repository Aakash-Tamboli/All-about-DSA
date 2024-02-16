#include<stdio.h>
int A[]={3,4,5,6,10};
int lengthA=5;
int B[]={2,4,5,7,12};
int lengthB=5;
int C[10];

void applyUnionOperation()
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
}
else if(A[i]<B[j])
{
C[k]=A[i];
i++;
}
else
{
C[k]=B[j];
j++;
}
k++;
}
while(i<lengthA)
{
C[k]=A[i];
k++;
i++;
}
while(j<lengthB)
{
C[k]=B[j];
k++;
j++;
}

}

int main()
{
applyUnionOperation();
for(int i=0;i<10;i++) printf("%d ",C[i]);
printf("\n");
return 0;
}

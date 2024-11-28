#include<iostream>
using namespace std;


int main()
{
int x[]={65,66,67,68,80,90};
int lenX=6;
int y[]={66,90,68,90};
int lenY=4;
int matrix[lenX+1][lenY+1];
int maxSS;


for(int i=0,j=0;j<=lenY;j++) matrix[i][j]=0;
for(int i=0,j=0;i<=lenX;i++) matrix[i][j]=0;

for(int i=1;i<=lenX;i++)
{
for(int j=1;j<=lenY;j++)
{
if(x[i-1]==y[j-1])
{
matrix[i][j]=matrix[i][j-1]+1;
}
else
{
if(matrix[i][j-1]>matrix[i-1][j]) matrix[i][j]=matrix[i][j-1];
else matrix[i][j]=matrix[i-1][j]; 
}
}
}


maxSS=0;
for(int i=1;i<=lenX;i++)
{
for(int j=1;j<=lenY;j++) if(maxSS<matrix[i][j]) maxSS=matrix[i][j];
}

cout<<"LCS: "<<maxSS<<endl;
return 0;
}

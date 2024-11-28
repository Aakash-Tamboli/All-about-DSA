#include<stdio.h>
#include<limits.h>
int voc[]={2,3,5};
int length=3;

int getCoins(int value)
{
int matrix[length+1][value+1];
int stepsValue;
int min;

for(int col=1;col<=value;col++) matrix[0][col]=INT_MAX-1;

for(int row=0;row<=length;row++) matrix[row][0]=0;

for(int row=1;row<=length;row++)
{
for(int col=1;col<=value;col++)
{
if(col>=voc[row-1])
{
stepsValue=matrix[row][col-(voc[row-1])];
stepsValue++;
if(stepsValue<matrix[row-1][col])
{
matrix[row][col]=stepsValue;
}
else
{
matrix[row][col]=matrix[row-1][col];
}
}
else
{
matrix[row][col]=matrix[row-1][col];
}
}
}

min=INT_MAX-1;
int row,col;
for(row=1;row<=length;row++) if(min>matrix[row][value]) min=matrix[row][value];


return min;
}

int main()
{
printf("Minimum number of coins requred are %d to get %d\n",getCoins(10),10);
return 0;
}

#include<iostream>
#include<vector>
#include<limits.h>

using namespace std;

int voc[]={2,3,10};
int length=3;

vector<int> getCoins(int value)
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
col=value;
for(int row1=1;row1<=length;row1++)
{
if(min>matrix[row1][value])
{
min=matrix[row1][value];
row=row1;
}
}
vector<int> answer;
while(matrix[row][col]!=0)
{
if(matrix[row-1][col]==matrix[row][col])
{
row--;
}
else
{
answer.push_back(voc[row-1]);
col=col-voc[row-1];
}
}

return answer;
}

int main()
{
int value=27;
auto coins=getCoins(value);
cout<<"Minimum number of coins requred are "<<coins.size()<<" to get "<<value<<" and they are: ";
for(auto coin: coins)
{
cout<<coin<<" ";
}
cout<<endl;
return 0;
}

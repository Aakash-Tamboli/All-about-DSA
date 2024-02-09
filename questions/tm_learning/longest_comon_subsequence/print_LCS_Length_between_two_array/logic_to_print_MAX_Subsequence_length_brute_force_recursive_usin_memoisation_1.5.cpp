// Checking No. of Copies 

#include<iostream>
using namespace std;
char x[]={"abcd"};
char y[]={"abd"};
int lenX=4;
int lenY=3;
int copies=0;
int stores[4][3];

int getLenOfLCS(int e,int f)
{
int leftSide,rightSide;
copies++;
if(e==lenX || f==lenY) return 0; // base condition
if(stores[e][f]!=-1) return stores[e][f];
if(x[e]==y[f]) return stores[e][f]=1+getLenOfLCS(e+1,f+1);
leftSide=getLenOfLCS(e+1,f);
rightSide=getLenOfLCS(e,f+1);
return (leftSide>rightSide)?leftSide:rightSide;
}

int getLengthOfLCS() // Wrapper: basically We don't want that directly access main recursuin function So ITs Wrapper
{
for(int i=0;i<4;i++)
{
for(int j=0;j<3;j++) stores[i][j]=-1; // -1 indicates that copy is not processed
}
return getLenOfLCS(0,0);
}

int main()
{
cout<<"Length of Longest common Sub-sequence: "<<getLengthOfLCS()<<endl;
cout<<"No. of copies: Opened: "<<copies<<endl;
return 0;
}

// The Whole Logic is Based upon previous core logic it recursive sol.

#include<iostream>
using namespace std;
char x[]={"abcd"};
char y[]={"abd"};
int lenX=4;
int lenY=3;

int getLenOfLCS(int e,int f)
{
int leftSide,rightSide;
if(e==lenX || f==lenY) return 0;
if(x[e]==y[f]) return 1+getLenOfLCS(e+1,f+1);
leftSide=getLenOfLCS(e+1,f);
rightSide=getLenOfLCS(e,f+1);
return (leftSide>rightSide)?leftSide:rightSide;
}

int getLengthOfLCS() // Wrapper: basically We don't want that directly access main recursuin function So ITs Wrapper
{
return getLenOfLCS(0,0);
}

int main()
{
cout<<"Length of Longest common Sub-sequence: "<<getLengthOfLCS()<<endl;
return 0;
}

#include<stdio.h>
#include<limits.h>
int voc[]={2,5,10};
int length=3;

int getCoins(int value)
{
int tmp,noc,i;
if(value==0) return 0;
noc=INT_MAX-1; //  bug solved
for(i=0;i<length;i++)
{
if(voc[i]<=value)
{
tmp=getCoins(value-voc[i]);
if(tmp+1<noc) noc=tmp+1; // +1 denoted/ means we hold one voc[i]
}
}
return noc;
}

int main()
{
printf("Minimum number of coins requred are %d to get %d\n",getCoins(27),27);
return 0;
}

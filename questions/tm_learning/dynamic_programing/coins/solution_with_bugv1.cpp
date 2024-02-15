#include<stdio.h>
#include<limits.h>
int voc[]={2,5,10};
int length=3;

int getCoins(int value)
{
int tmp,noc,i;
if(value==0) return 0;
noc=INT_MAX; // this is bug if by chance a copy return INT_MAX because in loop +1 we evaluate hence it become -ve
for(i=0;i<length;i++)
{
if(voc[i]<=value)
{
tmp=getCoins(value-voc[i]);
if(tmp+1<noc) noc=tmp+1; // this +1 is denote that voc[i] we hold right now, at last copy it return 0 
}
}
return noc;
}

int main()
{
printf("Minimum number of coins requred are %d to get %d\n",getCoins(27),27);
return 0;
}

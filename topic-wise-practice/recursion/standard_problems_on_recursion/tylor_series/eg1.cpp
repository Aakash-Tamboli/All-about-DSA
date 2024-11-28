#include<iostream>
#include<math.h>

using namespace std;

double tylor(int n,int x)
{
static int f=1;
if(x<=0)
{
return 1;
}
else
{
return pow(n,f)/tgamma(1+f++)+tylor(n,x-1);
}
}


int main()
{
/*
cout<<pow(4,2)<<endl;
cout<<tgamma(5+1)<<endl;
*/
cout<<tylor(4,10)<<endl;
return 0;
}

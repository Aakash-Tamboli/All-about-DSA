#include<iostream>
using namespace std;


int main()
{
int a[]={3,8,16,20,25};
int b[]={4,10,12,22,23};
int c[10];
int i,j,k;
i=0;
j=0;
k=0;
while(i<5 && j<5)
{
if(a[i]<b[j])
{
c[k]=a[i];
i++;
}
else
{
c[k]=b[j];
j++;
}
k++;
}

while(i<5)
{
c[k]=a[i];
i++;
}
while(j<5)
{
c[k]=b[j];
j++;
}

for(k=0;k<10;k++) cout<<c[k]<<" ";
cout<<endl;

return 0;
}

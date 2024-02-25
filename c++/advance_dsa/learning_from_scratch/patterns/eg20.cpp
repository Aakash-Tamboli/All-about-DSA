#include<iostream>
using namespace std;

void pattern20(int n)
{
    int spaces=(n*2)-2;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        for(int j=0;j<spaces;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        spaces-=2;
        cout<<endl;
    }
    spaces=2;
    for(int i=0;i<n;i++){
        if(i==0) continue;
        for(int j=0;j<=n-i-1;j++)
        {
            cout<<"*";
        }
        for(int j=0;j<spaces;j++)
        {
            cout<<" ";
        }
        spaces+=2;
        for(int j=0;j<=n-i-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    pattern20(3);
    return 0;
}
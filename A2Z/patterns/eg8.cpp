#include<iostream>
using namespace std;
int main(){
    int N=6;
    int starToBePrinted=-1;

    for(int i=0;i<N;i++){
        starToBePrinted+=2;
    }

    for(int i=N-1;i>=0;i--){
        for(int j=0;j<N-i-1;j++){
            cout<<" ";
        }
        for(int k=0;k<starToBePrinted;k++){
            cout<<"*";
        }
        cout<<"Debug: stars printed"<<starToBePrinted;
        starToBePrinted-=2;
        cout<<endl;
    }


    return 0;
}
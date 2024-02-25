#include<iostream>
using namespace std;

void printLeftHalf(int i,int N){
    for(int j=0;j<N;j++){
        if(j<=i){
            cout<<j+1;
        }
        else{
            cout<<"T";
        }
    }
}

void printRightHalf(int i,int N){
    int k=i+1;
    for(int j=0;j<N;j++){
        if(j<N-i-1){
            cout<<"T";
        }
        else{
            cout<<k;
            k--;
        }
    }
}

int main(){
    int N=3;
    cout<<"ok"<<endl;
    for(int i=0;i<N;i++){
        printLeftHalf(i,N);
        printRightHalf(i,N);
        cout<<endl;
    }
    return 0;
}
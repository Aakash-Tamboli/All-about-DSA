#include<iostream>
using namespace std;
int main(){
    int N=3;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(j<N-i-1){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}
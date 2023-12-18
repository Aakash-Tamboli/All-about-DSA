#include<iostream>
using namespace std;
int main(){
    int N=3;
    for(int i=0;i<N;i++){
        for(int j=N-i-1;j>=0;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
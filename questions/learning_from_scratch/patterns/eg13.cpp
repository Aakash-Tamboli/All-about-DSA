#include<iostream>
using namespace std;
int main(){
    int N=3;
    int counter=1;
    for(int i=0;i<N;i++){
        for(int j=0;j<=i;j++){
            cout<<counter++<<" ";
        }
        cout<<endl;
    }
    return 0;
}
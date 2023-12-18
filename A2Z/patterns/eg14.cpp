#include<iostream>
using namespace std;
int main(){
    int N=6;
    char character;
    for(int i=0;i<N;i++){
        character='A';
        for(int j=0;j<=i;j++){
            cout<<character++<<" ";
        }
        cout<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
void pattern16(int n){
    char character='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<character;
        }
        character++;
        cout<<endl;
    }
}

int main(){
    pattern16(5);
}
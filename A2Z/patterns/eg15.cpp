#include<iostream>
using namespace std;

void pattern15(int n){
    char character='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<character;
            character++;
        }
        character='A';
        cout<<endl;
    }
}
int main(){
    pattern15(5);
}
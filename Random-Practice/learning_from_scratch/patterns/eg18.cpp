#include<iostream>
using namespace std;

void pattern18(int n){
    char character='A'+n-1;
    char characterToBePrinted;
    for(int i=0;i<n;i++){
        characterToBePrinted=character-i;
        for(int j=0;j<=i;j++){
            cout<<characterToBePrinted;
            characterToBePrinted++;
        }
        cout<<endl;
    }
}

int main(){
    pattern18(6);
    return 0;
}
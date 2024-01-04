#include<iostream>
using namespace std;

void pattern17(int n){
    char character='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++) cout<<" ";
        for(int j=0;j<=i;j++){
            cout<<character;
            character++;
        }
        character--;
        if(character!='A'){
            character--;
            while(character>='A'){
                cout<<character;
                character--;
            }
            character='A';
        }
        cout<<endl;
    }
}

int main(){
    pattern17(6);
    return 0;
}
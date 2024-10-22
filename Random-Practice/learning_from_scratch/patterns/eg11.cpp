#include<iostream>
using namespace std;
int main(){
    int N=6;
    int outerStartWithOne=1;
    int innerStartWithOne;
    for(int i=0;i<N;i++){
        innerStartWithOne=outerStartWithOne;
        for(int j=0;j<=i;j++){
            if(innerStartWithOne){
                cout<<1;
                innerStartWithOne=0;
            }
            else{
                cout<<0;
                innerStartWithOne=1;
            }
        }
        if(outerStartWithOne) outerStartWithOne=0;
        else outerStartWithOne=1;
        cout<<endl;
    }
    return 0;
}
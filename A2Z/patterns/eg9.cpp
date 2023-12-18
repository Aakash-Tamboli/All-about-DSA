#include<iostream>
using namespace std;
void printUpperHalf(int row,int totalRows,int starToBePrinted){
    for(int j=0;j<totalRows-row-1;j++){
        cout<<" ";
    }
    for(int k=0;k<starToBePrinted;k++){
        cout<<"*";
    }
}

void printLowerHalf(int row,int totalRows,int starToBePrinted){
    for(int j=0;j<totalRows-row-1;j++){
        cout<<" ";
    }

    for(int k=0;k<starToBePrinted;k++){
        cout<<"*";
    }
}

int main(){
    int N=6;
    int upperHalfStarToBePrinted=1;
    int lowerHalfStarToBePrinted=-1;
    for(int i=0;i<N;i++){
        lowerHalfStarToBePrinted+=2;
    }

    for(int i=0;i<N;i++){
        printUpperHalf(i,N,upperHalfStarToBePrinted);
        upperHalfStarToBePrinted+=2;
        cout<<endl;
    }
    for(int i=0;i<N;i++){
        printLowerHalf(N-i-1,N,lowerHalfStarToBePrinted);
        lowerHalfStarToBePrinted-=2;
        cout<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;

int longestCommonSubsequence(string str1, string str2) {
        int tmpCount,count,startSearching;
        count=0;
        for(int e=0;e<str1.length();e++){
            tmpCount=0;
            startSearching=0;
            for(int i=e;i<str1.length();i++){
                for(int j=startSearching;j<str2.length();j++){
                    if(str1[i]==str2[j]){
                        //cout<<"Tempcount: "<<tmpCount<<endl;
                        tmpCount++;
                        startSearching=j+1;
                        break;
                    }
                }
            }
            if(tmpCount>count){
                count=tmpCount;
                // cout<<"count"<<count<<endl;
            }
        }
        // cout<<"Value of Count: "<<count<<endl;
        return count;
    }

int main(){
    cout<<longestCommonSubsequence("abcde","ace")<<endl;
    cout<<longestCommonSubsequence("mhunuzqrkzsnidwbun","szulspmhwpazoxijwbq")<<endl;
    return 0;
}
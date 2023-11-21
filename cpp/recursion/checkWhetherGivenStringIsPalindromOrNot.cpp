#include<stdio.h>
#include<iostream>
using namespace std;
bool recursiveFunction(string &str,int left,int right)
{
bool answer;
if(left>=right)
{
return true;
}
if(str[left]==str[right])
{
answer=recursiveFunction(str,left+1,right-1);
}
else
{
answer=false;
}
return answer;
}
bool checkWhetherStringIsPalindromOrNot(string &str)
{
int left,right;
left=0;
right=str.length()-1;
bool answer=recursiveFunction(str,left,right);
return answer;
}

int main()
{
string str="TONy";
bool answer=checkWhetherStringIsPalindromOrNot(str);
if(answer)
{
printf("%s is palindrom\n",str.c_str());
}
else
{
printf("%s is not palindrom\n",str.c_str());
}
return 0;
}

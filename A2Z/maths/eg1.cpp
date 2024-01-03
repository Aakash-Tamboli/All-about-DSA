/*
Problem statement
You are given a number ’n’.
Find the number of digits of ‘n’ that evenly divide ‘n’.
Note:
A digit evenly divides ‘n’ if it leaves no remainder when dividing ‘n’.
Example:
Input: ‘n’ = 336
Output: 3
Explanation:
336 is divisible by both ‘3’ and ‘6’. Since ‘3’ occurs twice it is counted two times.
Note:
You don’t need to print anything. Just implement the given function.
*/

#include<iostream>
using namespace std;
int countDigits(int n)
{
// 1<=n<=10^9
// O(log(n)) where n is no of digits in n
int preserve=n;
int tmp;
int digits=0;
while(n>0)
{
tmp=n%10;
n=n/10;
if(tmp!=0 && preserve%tmp==0) digits++;
}
return digits;
}
int main()
{
cout<<countDigits(35)<<endl;
return 0;
}

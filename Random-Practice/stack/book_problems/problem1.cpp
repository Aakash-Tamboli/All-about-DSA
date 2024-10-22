// how stack can be used for checking balancing of symboles/parenthsis
// Testcases: (A+B)+(C-D)
//	(A+B)+(C-D)   yes
//	((A+B)+[C-D])  No
//	((A+B)+[C-D])  yes
//	((A+B)+[C-D]}  No
#include<iostream>
#include<stack>
using namespace std;

int validateExpersion(string &t1)
{
stack<char> stk;
char c;
for(int i=0;i<t1.length();i++)
{
if(t1[i]=='(' || t1[i]=='{' || t1[i]=='[')
{
stk.push(t1[i]);
}
else if(t1[i]==')' || t1[i]=='}' || t1[i]==']')
{
if(stk.empty()) return 0;
if(t1[i]==')') c=t1[i]-1;
else c=t1[i]-2;
if(c!=stk.top()) return 0;
stk.pop();
}
}
if(stk.empty()) return 1;
else return 0;
}
int main()
{
string t1="(A+B)+(C-D)";
string t2="((A+B)+[C-D]";
string t3="((A+B)+[C-D])";
string t4="((A+B)+[C-D]}";

if(validateExpersion(t1)) printf("T1: Yes\n");
else printf("T1: No\n");
if(validateExpersion(t2)) printf("T2: Yes\n");
else printf("T2: No\n");
if(validateExpersion(t3)) printf("T3: Yes\n");
else printf("T3: No\n");
if(validateExpersion(t4)) printf("T4: Yes\n");
else printf("T4: No\n");

return 0;
}

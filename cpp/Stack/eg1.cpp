#include<iostream>
#include<stack>
using namespace std;

int main()
{
stack<string> stk;
cout<<"Stack Size: "<<stk.size()<<endl;

stk.push("Me");
stk.push("Work");
stk.push("Family");
stk.push("Thank to God");

cout<<"Stack Size: "<<stk.size()<<endl;

while(stk.size()!=0)
{
cout<<stk.top()<<endl;
stk.pop();
}

return 0;
}

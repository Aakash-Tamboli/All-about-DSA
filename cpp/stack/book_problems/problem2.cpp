#include<iostream>
#include<stack>
using namespace std;
int isOperand(char c)
{
return (c>='A' && c<='Z') || (c>='a' && c<='z') ||(c>='0' && c<='9');
}

int isOperator(char c)
{
return c=='+' || c=='-' || c=='/' || c=='*';
}

int isPopRequired(char stackElement,char oper)
{
if(stackElement=='*' || stackElement=='/')
{
if(oper=='+' || oper=='-') return 1;
else return 0;
}
return 0;
}

int main()
{
stack<int> stk;
string expr="(A+B)*C-D";
string postfix_expression;

int operandCount=0;
for(int i=0;i<expr.length();i++)
{
if(expr[i]=='(')
{
stk.push(expr[i]);
}
else if(expr[i]==')')
{
while(stk.top()!='(')
{
postfix_expression+=stk.top();
stk.pop();
}
stk.pop();
}
else if(isOperator(expr[i]))
{
cout<<"else if is Operator"<<endl;
if(stk.empty())
{
stk.push(expr[i]);
}
else
{
if(stk.top()!='(' && isPopRequired(stk.top(),expr[i]))
{
postfix_expression+=stk.top();
stk.pop();
}
stk.push(expr[i]);
}
}
else if(isOperand(expr[i]))
{
operandCount++;
postfix_expression+=expr[i];
if(operandCount==2)
{
postfix_expression+=stk.top();
stk.pop();
operandCount=0;
}
}
} // loop ends

while(!stk.empty())
{
postfix_expression+=stk.top();
stk.pop();
}
cout<<postfix_expression<<endl;
return 0;
}

/*
If we want to access static method which consist of non-static method calls
then
first create a object inside static method, then through that object call non-static method.
This Time Code will complied
*/
#include<iostream>
using namespace std;
class aaa
{
private:
// some props
public:
void tom()
{
cout<<"Non-Static method Tom got executed"<<endl;
}
static void sam()
{
aaa a; // necessary
cout<<"Static Method Sam got executed"<<endl;
a.tom(); // necessary
}
};

int main()
{
aaa::sam(); 
return 0;
}

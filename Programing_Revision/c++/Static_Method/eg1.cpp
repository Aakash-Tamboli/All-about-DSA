/*
Every Non-Static Method can access static method as well as non-static method.
But
Static method only access static method
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
cout<<"Static Method Sam got executed"<<endl;
}
};

int main()
{
aaa::sam(); // static method can access outside class
//aaa::tom(); // If you comment this line then code gets compiled
return 0;
}

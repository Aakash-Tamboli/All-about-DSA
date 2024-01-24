/*
If don't write copy constructor in dervied class then compiler will write and it first invokes base class copy constrctor then derived class copy constructor.

To Check create base class which having copy constrctor,
then In derived which not have Copy constructor execute and see proof of concept
*/

#include<iostream>
using namespace std;

class aaa
{
private:
// some props
public:
aaa()
{
}
aaa(const aaa &other)
{
cout<<"Base class Copy Constructor"<<endl;
}
};

class bbb: public aaa
{
private:
// some pros
public:
bbb()
{
}
};

int main()
{
bbb a;
bbb b(a);
return 0;
}

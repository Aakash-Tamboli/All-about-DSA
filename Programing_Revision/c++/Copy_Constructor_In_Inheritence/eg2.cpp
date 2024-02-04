/*
Special Case:
When We Write Copy Constructor in Derived Class, then whatever may happen it will invoke base class DEFAULT Constructor
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
cout<<"Base class Default Constructor"<<endl;
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
bbb(const bbb &other)
{
cout<<"Dervied Class Copy Constructor"<<endl;
}
};

int main()
{
bbb a;
bbb b(a);
return 0;
}

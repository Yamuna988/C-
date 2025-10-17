#include<iostream>
using namespace std;
class Base
{
	public :
		virtual void print()
		{
			cout<<"print() of base class"<<endl;
		}
};
class Derived : public Base
{
	public :
		void print()
		{
			cout<<"print() of  derived class"<<endl;
		}
};
int main()
{
	Base b, *bptr;
	Derived d;
	bptr=&b;
	bptr->print();
	bptr=&d;
	bptr->print();
	return 0;
}

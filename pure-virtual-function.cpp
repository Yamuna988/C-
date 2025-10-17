#include<iostream>
using namespace std;
class Base
{
	public :
		virtual void print()=0;
};
class Derived : public Base
{
	public :
		void print()
		{
			cout<<"example of pure virtual function"<<endl;
		}
};
int main()
{
	Base *bptr;
	Derived d;
	bptr=&d;
	bptr->print();
}

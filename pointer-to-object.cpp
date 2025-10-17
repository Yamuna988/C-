#include<iostream>
using namespace std;
class Base
{
	public:
		void print()
		{
			cout<<"print() of Base class"<<endl;
		}
};
class Derived : public Base
{
	public :
		void show()
		{
			cout<<"show() of derived class"<<endl;
		}
};
int main()
{
	Derived d;
	Derived *dptr;
	dptr=&d;
	dptr->show();
	dptr->print();
	return 0;
}

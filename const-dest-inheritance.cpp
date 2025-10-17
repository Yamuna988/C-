#include<iostream>
using namespace std;
class A
{
	public :
		A()
		{
			cout<<"class A constructor is invoked"<<endl;
		}
		~A()
		{
			cout<<"class A destructor is invoked"<<endl;
		}
};
class B : public A
{
	public :
		B()
		{
			cout<<"class B constructor is invoked"<<endl;
		}
		~B()
		{
			cout<<"class B destructor is invoked"<<endl;
		}
};
class C : public A
{
	public :
		C()
		{
			cout<<"class C constructor is invoked"<<endl;
		}
		~C()
		{
			cout<<"class C destructor is invoked"<<endl;
		}
};
int main()
{
	B b;
	C c;
	return 0;
}

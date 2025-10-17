#include<iostream>
using namespace std;
class shape
{
	public : 
	void area(int s)
	{
		cout<<"area of square= "<<s*s<<endl;
	}
	void area(int l,int b)
	{
		cout<<"area of rectangle= "<<l*b<<endl;
	}
	void area(float b,float h)
	{
		cout<<"area of triangle= "<<0.5f*h*b<<endl;
	}
};
int main()
{
	shape a;
	a.area(5);
	a.area(8,4);
	a.area(2,4);
	return 0;
}

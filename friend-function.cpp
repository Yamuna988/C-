#include<iostream>
using namespace std;
class demo
{
	private :
		int x;
		void get()
		{
			x=10;
		}
		friend void sum();
};
void sum()
{
	int y;
	y=20;
	demo d;
	d.get();
	cout<<"sum = "<<d.x+y;
}
int main()
{
	sum();
	return 0;
}

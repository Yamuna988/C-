#include<iostream>
using namespace std;
class unary
{
	int x,y,z;
	public :
		void get()
		{
			x=10;
			y=-15;
			z=-20;
		}
		void show()
		{
			cout<<"x= "<<x<<endl;
			cout<<"y= "<<y<<endl;
			cout<<"z= "<<z;
		}
		void operator - ()
		{
			x=-x;
			y=-y;
			z=-z;
		}
};
int main()
{
	unary u;
	u.get();
	-u;
	u.show();
	return 0;
}

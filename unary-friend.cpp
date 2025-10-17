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
		friend void operator - (unary &u);
};
void operator - (unary &u)
{
	{
			u.x=-u.x;
			u.y=-u.y;
			u.z=-u.z;
		}
}
int main()
{
	unary u;
	u.get();
	-u;
	u.show();
	return 0;
}

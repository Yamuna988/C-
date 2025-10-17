#include<iostream>
using namespace std;
class rectangle
{
	private :
		int length,breadth,y;
		public :
			rectangle()
			{
				length = 10;
				breadth = 5;
			}
			rectangle (int l,int b)
			{
				length = l;
				breadth = b;
			}
			rectangle (int x)
			{
				length = x;
				breadth = y;
			}
			void area()
			{
				cout<<"area = "<<length*breadth<<endl;
			}
};
int main()
{
	rectangle r1;
	rectangle r2(4);
	rectangle r3(3,6);
	r1.area();
	r2.area();
	r3.area();
	return 0;
}

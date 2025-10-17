#include<iostream>
using namespace std;
class rectangle
{
	private:
		int length,breadth,l,b;
		public:
			rectangle(int length,int breadth)
			{
				length=l;
				breadth=b;
			}
			void show()
			{
				cout<<"area of rectangle= "<<length*breadth;
			}
};
int main()
{
	rectangle r(10,20);
	r.show();
	return 0;
}

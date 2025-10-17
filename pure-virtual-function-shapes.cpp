#include<iostream>
using namespace std;
class shapes
{
	public :
		virtual void area()=0;
};
class areas : public shapes
{
	public :
		void area()
		{
			int l,w,s,h,b;
			l=10,w=20;
			s=5;
			h=4,b=2;
			cout<<"area of rectangle= "<<l*w<<endl;
			cout<<"area of square= "<<s*s<<endl;
			cout<<"area of triangle= "<<0.25f*h*b<<endl;
		}
};
int main()
{
	shapes *sptr;
	areas a;
	sptr=&a;
	sptr->area();
	return 0;
}

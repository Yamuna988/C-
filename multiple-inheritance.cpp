#include<iostream>
using namespace std;
class area
{
	protected :
		void calarea(int l,int b)
		{
			cout<<"area of rectangle= "<<l*b;
		}
};
class perimeter
{
	protected :
		void calperi(int l,int b)
		{
			cout<<"perimeter of rectangle= "<<2*(l+b);
		}
};
class rectangle : public area,public perimeter
{
	public :
		int l,b;
		void result()
		{
		cout<<"enter l,b= ";
		cin>>l>>b;
		calarea(l,b);
		calperi(l,b);
	}
};
int main()
{
	rectangle r;
	r.result();
	return 0;
}

#include<iostream>
using namespace std;
template<class T1,class T2>
class sample
{
	T1 a;
	T2 b;
	public :
		void getdata()
		{
			cout<<"enter a and b= "<<endl;
			cin>>a>>b;
		}
		void display()
		{
			cout<<"Displaying values"<<endl;
			cout<<"a= "<<a<<endl;
			cout<<"b= "<<b<<endl;
		}
};
int main()
{
	sample<int,int>s1;
	sample<int,char>s2;
	sample<int,float>s3;
	cout<<"two integer data"<<endl;
	s1.getdata();
	s1.display();
	cout<<"integer and character data"<<endl;
	s2.getdata();
	s2.display();
	cout<<"integer and float data"<<endl;
	s3.getdata();
	s3.display();
	
}

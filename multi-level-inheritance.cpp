#include<iostream>
using namespace std;
class student
{
	protected :
		string name;
		int rollno;
		void getst()
		{
			cout<<"enter name, rollno ";
			cin>>name>>rollno;
		}
		void showst()
		{
			cout<<"name = "<<name<<endl;
			cout<<"rollno= "<<rollno<<endl;
		}
};
class marks : public student
{
	protected  :
		float m1,m2,m3,m4,m5;
		void  getm()
		{
			getst();
			m1=90,m2=50,m3=98,m4=90,m5=80;
		}
};
class percentage : public marks
{
	public :
		float percentage;
		void showp()
		{
			getm();
			percentage = (m1+m2+m3+m4+m5)/5;
			showst();
			cout<<"percentage= "<<percentage;
		}
};
int main()
{
	percentage p;
	p.showp();
	return 0;
}

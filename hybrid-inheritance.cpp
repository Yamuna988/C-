#include<iostream>
using namespace std;
class student
{
	protected :
		int rollno;
		string name;
		void gets()
		{
			cout<<"enter rollno, name"<<endl;
			cin>>rollno>>name;
		}
		void shows()
		{
			cout<<"rollno= "<<rollno<<endl;
			cout<<"name= "<<name<<endl;
		}
};
class marks : public student
{
	protected :
		int m1,m2,m3,m4,m5;
		void getm()
		{
			gets();
			cout<<"enter the 5 subject marks ";
			cin>>m1>>m2>>m3>>m4>>m5;
		}
		
};
class SABL 
{
	protected :
		int tech;
		int nontech;
		void getp()
		{
			cout<<"enter the marks obtained for tech and non-tech events  ";
			cin>>tech>>nontech;
		}
		
};
class percentage : public marks,public SABL
{
	public :
		float percentage;
		void calpercentage()
		{
			getm();
			getp();
			percentage=((m1+m2+m3+m4+m5+tech+nontech))/7;
			shows();
			cout<<"percentage= "<<percentage;
		}
};
int main()
{
	percentage p;
	p.calpercentage();
	return 0;
}

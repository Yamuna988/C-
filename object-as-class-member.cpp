#include<iostream>
using namespace std;
class birth
{
	public :
		int dd,mm,yy;
		void show()
		{
			cout<<"enter day,month,year";
			cin>>dd>>mm>>yy;
			cout<<dd<<"-"<<mm<<"-"<<yy;
		}
};
class student 
{
	public :
		char name[20];
		birth dob;
		char gender;
		void print()
		{
			cout<<"enter name and gender"<<endl;
			cin>>name>>gender;
			cout<<"name= "<<name<<endl;
			cout<<"gender= "<<gender<<endl;
			cout<<"date of birth= ";
			dob.show();
		}
};
int main()
{
	student s;
	s.print();
	return 0;
}

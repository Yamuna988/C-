#include<iostream>
using namespace std;
class person
{
	protected  :
		string name;
		int age;
		char gender;
		void getp()
		{
			cout<<"enter name,age,gender";
			cin>>name>>age>>gender;
		}
		void showp()
		{
			cout<<"name= "<<name<<endl;
			cout<<"age= "<<age<<endl;
			cout<<"gender= "<<gender<<endl;
		}
};
class student : public person
{
	private :
		int pinno;
		float per;
		public :
			void getst()
			{
				getp();
				pinno=501;
				per=98.9;
			}
			void display()
			{
				showp();
					cout<<"pinno= "<<pinno<<endl;
					cout<<"percentage= "<<per<<endl;
			}
};
class faculty : public person
{
	private :
		int empid;
		float experience;
		public :
			void getf()
			{
				getp();
				empid=501;
				experience=9;
			}
			void display()
			{
				showp();
					cout<<"empid= "<<empid<<endl;
					cout<<"experience= "<<experience;
			}
};
int main()
{
	student s;
	s.getst();
	s.display();
	faculty f;
	f.getf();
	f.display();
	return 0;
	return 0;
}

#include<iostream>
using namespace std;
class person
{
	protected:
		string name;
		int age;
		char gender;
		void getp()
		{
			cout<<"enter name,age,gender= ";
			cin>>name>>age>>gender;
		}
		void showp()
		{
			cout<<"name = "<<name<<endl;
			cout<<"age = "<<age<<endl;
			cout<<"gender = "<<gender<<endl;
		}
};
class student : public person
{
	private :
		int rollno;
		float percentage;
		public :
		void getst()
		{
			getp();
			rollno = 3;
			percentage = 95;
		}
	    void display()
		{
			showp();
			cout<<"rollno = "<<rollno<<endl;
			cout<<"percentage = "<<percentage<<endl;
		}
};
int main()
{
	student s;
	s.getst();
	s.display();
	return 0;
}

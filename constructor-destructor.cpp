#include<iostream>
using namespace std;
class sample
{
	public :
		sample()
		{
			cout<<"constructor is called"<<endl;
		}
		~sample()
		{
			cout<<"destructor is called"<<endl;
		}
};
int main()
{
	sample s1,s2,s3;
	return 0;
}

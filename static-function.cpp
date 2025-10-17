#include<iostream>
using namespace std;
class sample
{
    public:
		static int x;
			void show()
			{
				cout<<x;
			}
};
int sample::x;
int main()
{
	sample s;
	s.show();
	cout<<sample::x;
	return 0;
}


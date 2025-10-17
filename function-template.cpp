#include<iostream>
using namespace std;
template<typename T>
void add(T x,T y)
{
	cout<<x+y<<endl;
}
int main()
{
	add(10,20);
	add(20.6,30.4);
	add(3.5f,6.8f);
	return 0;
}

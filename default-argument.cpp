#include<iostream>
using namespace std;
void sum(int a=10,int b=20)
{
	cout<<a+b<<endl;
}
int main()
{
	sum(20);
	sum();
	return 0;
}

#include<iostream>
using namespace std;
int a=500;
int main()
{
	int a=600;
	cout<<"local= "<<a<<endl;
	cout<<"global= "<<::a<<endl;
	return 0;
}

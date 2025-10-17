#include<iostream>
using namespace std;
template<typename T>
void sort(T a[],int n)
{
	T temp;
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
template<typename T>
void print(T a[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
}
int main()
{
	int a[5]={12,97,34,56,33};
	char c[5]={'s','c','a','m','n'};
	float f[5]={4.5,14.7,98.2,66.5,90.5};
	sort(a , 5);
	print(a , 5);
	sort(c , 5);
	print(c , 5);
	sort(f , 5);
	print(f , 5);
}

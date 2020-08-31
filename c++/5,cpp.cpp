#include<iostream>
using namespace std;
int main()
{
	int a=3;
	int* p=&a;
	cout<<"the address is"<<p<<endl;
	cout<<"the address is"<<&a<<endl;
	cout<<"the value is "<<*p<<endl;
	return 0;
}

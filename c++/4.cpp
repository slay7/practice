#include<iostream>
using namespace std;
void run();
void run(int);
int main()
{
	run();
	run(8);
	return 0;
}
void run()
{
	cout<<"run is running";
}
void run(int a)
{
cout<<"run is running "<<a<<"with int";	
}

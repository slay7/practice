#include<iostream>
using namespace std;
int sum(int a,int b,int c);
int sum(int a,int b)
{
	cout<<"function with 2 arguements:";
	return a+b;
}
int sum(int a,int b,int c)
{
	cout<<"function with 3 arguements:";
	return a+b+c;
}
int main()
{
sum(3,4);
sum(3,4,5);	
}

#include<iostream>
using namespace std;
class laptop
{
	public:
	char name[100];
	int price;
	char processor[100];
	void get()
	{
	
		cin>>name>>price>>processor;
	}
	void show()
	{
		cout<<"name:"<<name<<"\nprice:"<<price<<"\nprocessor"<<processor;
	}
};

int main()
{
	laptop x;
	x.get();
	x.show();
	return 0;
}

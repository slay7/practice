#include<iostream>
using namespace std;
class operation
{
	int a;
	public:
		void get()
		{
			cin>>a;
		}
		int square()
		{
			return a*a;
		}
		int cube()
		{
			return a*a*a;
		}
		void display()
		{
			int sq=  square();
			int c= cube();
			cout<<"the square is:"<<sq<<endl;
			cout<<"the cube is:"<<c<<endl;
		}
		
};
int main()
{
	operation x;
	x.get();
	x.display();
	return 0;
}

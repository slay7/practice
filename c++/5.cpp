#include<iostream>
using namespace std;
class emp
{
	private:
		int a,b;
		public:
			int c,d;
			void setdata(int a1,int b1);
			void getdata()
			{
				cout<<"value of a "<<a<<endl;
				cout<<"value of b "<<b<<endl;
				cout<<"value of c "<<c<<endl;
				cout<<"value of d "<<d<<endl;
			}
};
void emp::setdata(int a1,int b1)
{
	a=a1;
	b=b1;
}
int main()
{
	emp x;
	x.c=4;
	x.d=5;
	x.setdata(7,8);
	x.getdata();
	return 0;
}

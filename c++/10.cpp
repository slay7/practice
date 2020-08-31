#include<iostream>
using namespace std;
typedef struct rectangle
{
	int l,b;
} rect;
int main()
{
	struct typedef rect;
	rect.l=56;
	rect.b=34;
	cout<<"the area is :"<<rect.l*rect.b;
	return 0;
}

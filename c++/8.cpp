#include<iostream>
#include<array>
using namespace std;
int main()
{
	int array<int,6> a={1,2,3,4,5,6};
	cout<<"printing array elements using at():";
	for(int i=0;i<6;i++)
	{
		cout<<a.at(i)<<" ";
		cout<<endl;
	}
	cout<<"printing array elements using get():";
	cout<<get<0>(a)<<" "<<get<1>(a)<<" ";
	cout<<get<2>(a)<<" "<<get<3>(a)<<" ";
	cout<<get<4>(a)<<" "<<get<5>(a)<<" ";
	cout<<"printing array elements by simple method:";
	for(int i=0;i<6;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"printing first element in array:";
	cout<<a.front()<<endl;
	cout<<"printing last element in array:";
	cout<<a.back()<<endl;
	cout<<"number of array elements:";
	cout<<a.size()<<endl;
	cout<<"maximum number of array elements:";
	cout<<max_size()<<endl;
	int a1[]={7,8,9,0,5,3};
	a.swap(a1);
	cout<<"array after swapping:";
	for(int i=0;i<6;i++)
	{
		cout<<a.at(i)<<" ";
		cout<<endl;
	}
	cout<<"array1 after swapping:";
	for(int i=0;i<6;i++)
	{
		cout<<a1.at(i)<<" ";
		cout<<endl;
	}
	int a3[],a4[];
	a3.empty?cout<<"array is empty":cout<<"array not empty";
	cout<<endl;
	a4.fill(0);
	cout<<"array elements after fill";
	for(int i=0;i<6;i++)
	{
		cout<<a4.at(i);
		cout<<endl;
	}
	return 0;
}

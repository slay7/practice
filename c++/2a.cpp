#include<iostream>
using namespace std;
int main()
{
	int f,s,n,count,sum;
	count=0;
	cout<<"enter the number of terms\n";
	cin>>n;
	cout<<"enter the first and second term\n";
	cin>>f>>s;
	cout<<"the series is \n";
	cout<<f<<endl<<s<<endl;
	while(count<n)
	{
		sum=f+s;
		cout<<sum<<endl;
		f=s;
		s=sum;
		count++;
	}
	return 0;
}

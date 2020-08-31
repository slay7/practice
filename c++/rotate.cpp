#include<iostream>
#define right 0
#define left 1
#define size 100
using namespace std;
void rotate(int a[],int n,int dir , int k);
void display(int a[],int n);
void  input(int a[], int n)
{
	cin>>n;
	for( int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
void display(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
}
void rotate(int a[],int n,int dir,int k)
{
	int temp;
	cin>>k>>n>>dir;
	if(dir==right)
	{
		while(k)
		{
			temp=a[n-1];
			for( int i=n-1;i>=1;i--)
			{
				a[i]=a[i-1];
			}
			a[0]=temp;
			k--;
		}
	}
	else
	{
		while(k)
		{
			temp=a[0];
			for( int i=1;i<n;i++)
			{
				a[i+1]=a[i];
			}
			a[n-1]=temp;
			k--;
		}
	}
}
int main()
{
input( a,int n);
display( a, int n);
rotate(a,int n,int dir,int k);
display( a,int n);
	return 0;
}

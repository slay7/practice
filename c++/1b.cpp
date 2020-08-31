#include<iostream>
using namespace std;
int main()
{
	int i,a,b,sum,divide,subtract,multiply;
	cout<<"enter the numbers"<<endl;
	cin>>a>>b>>i;
	switch(i)
	{
		case 1:
		{
			sum=a+b;
			cout<<sum;
			break;
		}
		case 2:
			{
				subtract=a-b;
				cout<<subtract;
				break;
			}
			case 3:
				{
					multiply=a*b;
					cout<<multiply;
					break;
				}
				case 4:
					{
						divide=a/b;
						cout<<divide;
						break;
					}
					default:
					{
					
					cout<<"invalid";}
				}
				return 0;
	}
	


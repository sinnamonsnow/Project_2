#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	double base,num;
	long expo;
	cout <<"Enter the base and integer exponent of the power => ";
	cin>>base>>expo;
	cout<<setprecision(5)<<fixed<<base<<"^"<<expo<<" = ";
	if(base==0)
	{
		if(expo<=0)
			cout<<"nan"<<endl;
		else
			cout<<base<<endl;
	}
	else
	{
		if(base==1)
			cout<<"1.00000"<<endl;
		else if(base==-1)
		{
			if(expo%2==0)
				cout<<"1.00000"<<endl;
			else
				cout<<"-1.00000"<<endl;
		}
		else if(base!=0)
		{
			if(expo==0)
				cout<<"1.00000"<<endl;
			else if(expo<0)
			{
				num=base;
				for(int i=2;i<=abs(expo);i++)
					num=num*base;
				cout<<1/num<<endl;
			}
			else
				{
				num=base;
				for(int i=2;i<=expo;i++)
					num=num*base;
				cout<<num<<endl;
				}
		}
	}

	return 0;
}

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
	num=base;
	cout<<setprecision(5)<<fixed<<base<<"^"<<expo<<" = ";
	if(base==0)
	{
		if(expo<=0)
			cout<<NAN<<endl;
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
		else
		{
			if(expo==0)
				cout<<"1.00000"<<endl;
			else
			{
				for(int i=2;i<=abs(expo);i++)
					num=num*base;
				if (expo>0)
					cout<<num<<endl;
				else
					cout<<1/num<<endl;
			}
		}
	}

	return 0;
}

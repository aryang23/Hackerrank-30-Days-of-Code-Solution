#include<iostream>
using namespace std;
int main()
{
	double d;
	int tipPercent;
	int taxPercent;
	cin>>d;
	cin>>tipPercent;
	cin>>taxPercent;
	double d1,d2;
	d1=(d*tipPercent)/100;
	d2=(d*taxPercent)/100;
	double tc=d+d1+d2;
	int tc2=d1+d2+d;
	if((tc-tc2)>0.5)
	{
		cout<<(tc2+1);
	}
	else
	{
		cout<<tc2;
	}
}

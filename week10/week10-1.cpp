#include <iostream>
using namespace std;
int main()
{
	double h,w;
	cin>>h>>w;
	double bmi=w/(h*h);
	cout<<bmi<<"\n";
	if(bmi<18.5) cout<<"too thinD";
	else if(bmi<24) cout<<"standard";
	else cout<<"too fat";
}
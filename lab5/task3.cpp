#include<iostream>
using namespace std;
int main()
{
  int num1;
	int num2;
	int num3;
	cout<<"enter first number"<<endl;
	cin>>num1;
	cout<<"enter second number"<<endl;
	cin>>num2;
	cout<<"enter third number"<<endl;
	cin>>num3;
	if(num1>num2&&num1>num3)
	cout<<"num1 is greater:"<<num1<<endl;
	if(num2>num1&&num2>num3)
	cout<<"num2 is greater:"<<num2<<endl;
	if(num3>num1&&num3>num2)
	cout<<"num3 is greater:"<<num3<<endl;
	return 0;	
}

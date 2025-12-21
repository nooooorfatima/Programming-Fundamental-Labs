#include<iostream>
using namespace std;
int main()
{
	int salary;
	cout<<"enter your salary $:"<<endl;
	cin>>salary;
	int experience;
	cout<<"enter your year of experience :"<<endl;
    cin>>experience;
	if(salary>=25000)
	{
		cout<<"you are elligible for loan"<<endl;
	}
	else if(salary>=20000&&experience>5)
	{
		cout<<"you are elligible for loan based on experience"<<endl;	
	}
	else
	{
	    cout<<"sorry you are not elligible for the loan"<<endl;
	}
	return 0;
}

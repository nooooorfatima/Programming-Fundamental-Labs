#include<iostream>
using namespace std;
int main()
{
	double balance,withdrawal;
	cout<<"enter your balance :";
	cin>>balance;
	cout<<"enter amount to withdraw :";
	cin>>withdrawal;
	if(withdrawal<=balance)
	{
		balance=balance-withdrawal;
    	cout<<"Transaction successful"<<endl;
    	cout<<"remaining balance $:"<<balance<<endl;
    }
    	else
    	{
		cout<<"insufficient balance."<<endl;
    	}
    
	return 0;
}

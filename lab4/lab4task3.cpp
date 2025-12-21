#include <iostream>
using namespace std;
int main()
{
	double balance;
	int loyal; //1=loyal,0=not loyal
	 
	cout<<"enter account balance";
	cin>>balance;
	
		cout<<"is the customer loyal?(1 = yes,0 = no):";
		cin>>loyal;
		//account type using nested ternary
		string accounttype = (balance < 100) ? "low balance account":
			(balance <= 500) ? "standard account":
	        "premium account";
	        
	        string offerStatus = (balance > 200 && loyal == 1) ? "elligible for special offer" : "not elligible for special offer";
	        cout<<"account type:"<<accounttype<<endl;
	        cout<<"special offer:"<<offerStatus<<endl;
	        return 0;
	        
}
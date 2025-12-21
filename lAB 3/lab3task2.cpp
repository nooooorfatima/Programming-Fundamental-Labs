#include<iostream>
using namespace std;
int main()
{
	double item1=12.95;
	double item2=24.95;
	double item3=6.95;
	double item4=14.95;
	double item5=3.95;
	const double Tax=0.06;
	cout<<"Price of Item1: "<<"$"<<item1<<endl
	    <<"Price of item2: "<<"$"<<item2<<endl
	    <<"Price of item3: "<<"$"<<item3<<endl
	    <<"Price of item4: "<<"$"<<item4<<endl
	    <<"Price of item5: "<<"$"<<item5<<endl;
	double subtotal=item1+item2+item3+item4+item5;
	cout<<"Subtotal: "<<"$"<<subtotal<<endl;
	double salestax=subtotal*Tax;
	double total=subtotal+salestax;
	cout<<"Sales Tax:"<<salestax<<endl;
	cout<<"Total:"<<total<<endl;
}
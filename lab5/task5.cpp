#include<iostream>
using namespace std;
int main()
{
char signal;
	cout<<"enter the colour of the signal(R,G,Y)"<<endl;
	cin>>signal;
	if(signal=='R'||signal=='r')
	cout<<"stop"<<endl;
	if(signal=='G'||signal=='g')
	cout<<"go"<<endl;
	if(signal=='Y'||signal=='y')
	cout<<"slow down"<<endl;
	return 0;
	
}


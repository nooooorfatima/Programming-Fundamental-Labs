#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float x=85.5;
	float y=90.75;
	float z=88.25;
	float average;
	float sum=x+y+z;
	average=sum/3;
	cout<<fixed<<setprecision(2);
	cout<<"the average of 85.5,90.75 and 88.25 ="<<average;
	
}
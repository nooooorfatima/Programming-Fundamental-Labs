#include<iostream>
using namespace std;
int main()
{
	int age;
	string child,adult;
	cout<< "Enter age"<<endl;
	cin>> age;
	(age<13) ? cout<< "child": (age<= 19) ? cout<< "teenager":	(age<20) ? cout<< "adult":
	cout<< "age falls under the category";
	
}

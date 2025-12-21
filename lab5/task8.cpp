#include<iostream>
using namespace std;
int main()
{
	int year;
	char grade;
	float basicSalary=0,bonus=0,tax=0,grossSalary=0,netSalary=0;
	cout<<"enter you are grade"<<endl;
	cin>>grade;
	cout<<"enter you are years of service"<<endl;
	cin>>year;
	
	if(grade=='A'||grade=='a')
	{
       basicSalary=50000;
	}
		if(grade=='B'||grade=='b')
	{
       basicSalary=30000;
	}
		if(grade=='C'||grade=='c')
	{
       basicSalary=20000;
	}
	//create bonus
	if(year>=10)
	{
		bonus=basicSalary*0.10;
	}
		if(year<9&&year>5)
	{
		bonus=basicSalary*0.5;
	}
		if(year<5)
	{
		bonus=basicSalary*0;
	}
	//GROSS SALARY
	grossSalary=basicSalary+bonus;
	//tax deduction
	if(grossSalary>40000)	{
		tax=grossSalary*0.20;
	}
		if(grossSalary>=30000&&grossSalary<=40000)	
	{
		tax=grossSalary*010;
		}
		if(grossSalary<30000){
		tax=0;
	}
	//net salary
	netSalary=grossSalary-tax;
	//output
	cout<<"basicsalary:"<<basicSalary<<endl;
	cout<<"Bonus:"<<bonus<<endl;
	cout<<"grosssalary:"<<grossSalary<<endl;
	cout<<"tax deducted:"<<tax<<endl;
	cout<<"netsalary:"<<netSalary<<endl;
	return 0;
		
	
	
}

#include<iostream>
using namespace std;
int main()
{
	double x1=3.0;
	double y1=4.0;
	double x2=6.0;
	double y2=8.0;
	double squared_distance;
	squared_distance=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
	//squared_distance= ( (x2-x1)^2)+( (y2-y1) ^2);
	cout<<"The squared distance between the points (3,4) and (6,8) is:"<<squared_distance;
}
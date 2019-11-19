
// Practice Day 1

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double pow4(double x)
{
	x *= x; //pow 2
	return (x*x); //pow 4
}

double pow6(double x)
{
	double y = x; 
	x *= x; //pow 2
	x *= y; //pow 3
	return (x*x); //pow 6
}

double pow15(double x)
{
	double y = x;
	x *= x; //pow 2
	x *= y; //pow 3
	y = x;
	x *= x; //pow 6
	x *= x; //pow 12
	return (x*y); //pow 15
}

int main()
{
	double a;
	
	cin >> a;
	
	cout << pow4(a) << " " << pow6(a) << " " << pow15(a) << endl;

	system("pause");
	return 0;
}

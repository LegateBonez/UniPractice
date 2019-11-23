
// Practice Day 2

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	double m = 0;
	
	for(int i = 1; i <= 54; i++)
	{
		m += cos((1+i*2)/(3+i*2));
	}
	
	cout << m << endl;
	
	system("pause");
	return 0;
}

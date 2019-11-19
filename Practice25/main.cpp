
// Practice Day 1

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	int weeks, months, years;
	cin >> weeks >> months >> years;
	
	int days;
	
	days = ((weeks*7)+(months*30)+(years*365));
	
	cout << days << endl;

	system("pause");
	return 0;
}

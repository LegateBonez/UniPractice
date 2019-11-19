
// Practice Day 1

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	string month[]={"January","February","March",
					"April","May","June","July",
					"August","September","October",
					"November","December"};
	int x;
	
	cin >> x;
	
	if((x<1) || (x>12))
	{
		cout << "Invalid Input" << endl;
		return 0;
	}

	cout << month[x-1] << endl;

	system("pause");
	return 0;
}

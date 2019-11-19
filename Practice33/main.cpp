
// Practice Day 1

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	float x, y;
	
	cin >> x >> y;
	
	if(y < 0)
	{
		cout << "Invalid Input";
		return 0;
	}
	else if((x-sqrt(y)) < 0)
	{
		cout << "Invalid Input";
		return 0;
	}
	
	cout << sqrt(x-sqrt(y)) << endl;

	system("pause");
	return 0;
}

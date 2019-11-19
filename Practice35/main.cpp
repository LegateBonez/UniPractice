
// Practice Day 1

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	float x;
	
	cin >> x;
	
	if(x < 7.0)
	{
		cout << "Yes";
	}
	else if(x > 10.0)
	{
		cout << "No";
	}
	else if(x == 9.0)
	{
		cout << "Error";
	}
	
	cout << endl;

	system("pause");
	return 0;
}

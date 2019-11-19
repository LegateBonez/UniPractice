
// Practice Day 1

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	float x;
	
	cin >> x;
	
	if(x > 3)
	{
		x += 10;
	}
	else
	{
		x -= 10;
	}
	
	cout << x << endl;

	system("pause");
	return 0;
}

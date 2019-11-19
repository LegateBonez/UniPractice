
// Practice Day 1

#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	int x, z, res = 237;
	
	z = res / 100;
	
	x = ((res - (z*100)) * 10) + z;
	
	cout << x << endl;

	system("pause");
	return 0;
}


// Practice Day 2

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	int h, m;
	float x;
	
	cin >> h >> m;
	
	if (h > 12) h -= 12;
	x = abs(30*h - 6*m);
	if (x > 180) x = 360 - x;
	
	cout << x;
	
	cout << endl;
	
	system("pause");
	return 0;
}

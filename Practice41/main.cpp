
// Practice Day 1

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	float x;
	
	cin >> x;
	
	if((x > 100.0) || (x < -100.0)) x = 0.0;
	else x -= 1.0;
	
	cout << x << endl;
	
	system("pause");
	return 0;
}

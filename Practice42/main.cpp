
// Practice Day 1

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	float x;
	
	cin >> x;
	
	if((x >= 2.0) && (x <= 5.0)) x += 10.0;
	else if((x > 7.0) && (x < 40.0)) x -= 100.0;
	else if((x <= 0.0) || (x > 3000.0)) x *= 3.0;
	else x = 0;
	
	cout << x << endl;
	
	system("pause");
	return 0;
}

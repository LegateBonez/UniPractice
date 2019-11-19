
// Practice Day 1

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	float x;
	
	cin >> x;
	
	if((x > -10.0) && (x < 10.0)) x += 5;
	else x -= 10.0;
	
	cout << x << endl;
	
	system("pause");
	return 0;
}

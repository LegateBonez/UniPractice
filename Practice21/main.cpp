
// Practice Day 1

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	float a, b, c;
	
	cin >> a >> b;
	c = sqrt((pow(a,2)+pow(b,2)));
	
	cout << "S = " << ((a*b)/2.0) << " P = " << (a+b+c) << " c = " << c << endl;

	system("pause");
	return 0;
}

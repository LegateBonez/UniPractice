
// Practice Day 1

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	float a, b, c;
	
	cin >> a >> b >> c;
	
	a *= 2;
	b -= 3;
	c = pow(c,2);
	
	cout << a << " " << b << " " << c << " " << (a+b+c) << endl;

	system("pause");
	return 0;
}

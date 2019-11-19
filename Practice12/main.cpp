
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	float x = 3.6;
	float y = (pow(exp(1),(x-2)) + abs(sin(x)) - pow(x,4) * cos(1/x));

	cout << y << endl;

	system("pause");
	return 0;
}

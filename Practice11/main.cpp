
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	float x = -2.34;
	float y = ((((abs(x-5)) - sin(x)) / 3) + (sqrt(pow(x,2) + 2014)) * cos(x*2) - 3);

	cout << y << endl;

	system("pause");
	return 0;
}

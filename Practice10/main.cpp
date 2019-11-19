
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

float tasktenfunc(float a)
{
	if(!a) return 0;
	return (pow((a + 1), 2) + (3 * (a + 1)));
}

int main()
{
	float x1 = 1.7, x2 = 3.0;
	
	cout << "f(1.7) = " << tasktenfunc(x1) << endl;
	cout << "f(3.0) = " << tasktenfunc(x2) << endl;

	system("pause");
	return 0;
}

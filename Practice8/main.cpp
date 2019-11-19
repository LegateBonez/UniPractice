
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	float a = 2, b = 3;
	float c = (((a + (b*4)) * (a - (b*3))) + pow(a, 2));
	
	cout << c << endl;

	system("pause");
	return 0;
}

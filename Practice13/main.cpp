
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	float a = 0.1, b = 0.2, x = 1.0;
	float y = pow((pow(x,2) + b), (1.0/5.0)) - (pow(b,2)*pow(sin(x+a),3) / x);

	cout << y << endl;

	system("pause");
	return 0;
}


// Practice Day 1

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void swopper(float *x, float *y)
{
	float z = *x;
	*x = *y;
	*y = z;
}

int main()
{
	float a, b;
	
	cin >> a >> b;
	
	swopper(&a, &b);
	
	cout << a << " " << b << endl;

	system("pause");
	return 0;
}

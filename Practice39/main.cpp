
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
	float x, y;
	
	cin >> x >> y;
	
	if(x > y) cout << "yes";
	else
	{
		swopper(&x, &y);
		cout << x << " " << y;
	}
	
	cout << endl;
	
	system("pause");
	return 0;
}

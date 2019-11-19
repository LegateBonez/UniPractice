
// Practice Day 1

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	float dep, per, res_simple, res_complex;
	
	cin >> dep >> per;
	per /= 100;
	
	res_simple = (dep + dep*(per*5));
	res_complex = dep;
	for(int i = 0; i < 5; i++)
	{
		res_complex *= (1.0 + per);
	}
	
	cout << "Simple Percentage: " << res_simple << endl;
	cout << "Complex Percentage: " << res_complex << endl;

	system("pause");
	return 0;
}

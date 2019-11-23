
// Practice Day 2

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	double n, m = 0, x;
	cin >> n;
	
	for(int i = 1; i <= n; i++)
	{
		x = 1;
		for(int j = i; j <= i*2; j++)
		{
			x *= j;
		}
		m += x;
	}
	
	cout << m << endl;
	
	system("pause");
	return 0;
}

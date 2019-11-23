
// Practice Day 2

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	double x, n, m = 0;
	cin >> x >> n;
	
	for(int i = 1; i <= n; i++)
	{
		m += 1/pow(cos(x), i);
	}
	
	cout << m << endl;
	
	system("pause");
	return 0;
}

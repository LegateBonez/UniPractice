
// Practice Day 2

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	double a, n, m = 1;
	cin >> a >> n;
	
	for(int i = 1; i <= n; i++)
	{
		m *= pow((a+i), 2);
	}
	
	cout << m << endl;
	
	system("pause");
	return 0;
}

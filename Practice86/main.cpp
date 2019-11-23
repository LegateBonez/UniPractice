
// Practice Day 2

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	int n, m = 0;
	cin >> n;
	
	for(int i = 1; i <= n; i++)
	{
		m += i;
	}
	
	cout << m << endl;
	
	system("pause");
	return 0;
}

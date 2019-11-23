
// Practice Day 2

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	int n, a, b;
	
	cin >> n;
	
	a = n % 10000 / 1000;
	b = n % 100 / 10;
	
	n = n - a*1000 - b*10;
	
	cout << n;
	
	cout << endl;
	
	system("pause");
	return 0;
}

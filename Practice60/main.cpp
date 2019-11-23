
// Practice Day 2

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	int n, a, b, c;
	
	cin >> n;
	
	a = n / 100;
	b = n % 100 / 10;
	c = n % 10;
	
	n = c*100 + b*10 + a;
	
	cout << n;
	
	cout << endl;
	
	system("pause");
	return 0;
}

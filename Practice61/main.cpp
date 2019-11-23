
// Practice Day 2

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	int n, a, b, c, d;
	
	cin >> n;
	
	a = n / 1000;
	b = n % 1000 / 100;
	c = n % 100 / 10;
	d = n % 10;
	
	if((a == b) || (a == c) || (a == d) || (b == c) || (b == d) || (c == d)) cout << "yes";
	else cout << "no";
	
	cout << endl;
	
	system("pause");
	return 0;
}

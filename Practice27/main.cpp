
// Practice Day 1

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	float a, b, c, x, y;
	
	cin >> a >> b >> c;
	
	x = a;
	y = b;
	a = x+y;
	b = c-x;  // Пример в задаче противоречит условию: b присваивается значение "c - a" с использованием новой 'a';
	c += a;
	
	cout << a << " " << b << " " << c << endl;

	system("pause");
	return 0;
}

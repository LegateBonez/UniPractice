
// Practice Day 2

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	float a, b, c, s, area;
	
	cin >> a >> b >> c;
	
	s = (a+b+c) / 2;
	area = sqrt(s * (s-a) * (s-b) * (s-c));
	
	if((a+b > c) && (a+c > b) && (b+c > a)) cout << area;
	else cout << "Wrong triangle";
	
	cout << endl;
	
	system("pause");
	return 0;
}

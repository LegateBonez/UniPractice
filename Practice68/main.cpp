
// Practice Day 2

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	float a, b, c, x1, x2;
	
	cin >> a >> b >> c;
	
	x1 = (-b + sqrt(pow(b,2) - (4*a*c))) / (2 * a);
	x2 = (-b - sqrt(pow(b,2) - (4*a*c))) / (2 * a);
	
	if(x1 != x2) cout << x1 << " " << x2;
	else cout << x1;
	
	cout << endl;
	
	system("pause");
	return 0;
}

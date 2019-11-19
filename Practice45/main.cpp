
// Practice Day 1

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	float a, b, c;
	
	cin >> a >> b >> c;
	
	if((a > 10) && (b > 10) && (c > 10) && !fmod(a, 3) && !fmod(b, 3)) cout << "yes";
	else cout << "no";
	
	cout << endl;
	
	system("pause");
	return 0;
}


// Practice Day 1

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	int a, b;
	
	cin >> a >> b;
	
	if((a != 10) && (b != 10) && !(a%2)) cout << (a+b);
	else cout << (a*b);
	
	cout << endl;
	
	system("pause");
	return 0;
}

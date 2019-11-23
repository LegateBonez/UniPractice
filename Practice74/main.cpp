
// Practice Day 2

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	int k;
	
	cin >> k;
	
	cout << ((k % 2) * ((k - 1) / 20 + 1)) + ((k + 1) % 2) * (((k - 1) % 20) / 2);
	
	cout << endl;
	
	system("pause");
	return 0;
}

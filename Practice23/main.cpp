
// Practice Day 1

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	float x, a, y, k;
	
	cout << "Weight 1: "; cin >> x;
	cout << "Price per 1kg: "; cin >> a;
	cout << "Weight 2: "; cin >> y;
	cout << "Money: "; cin >> k;
	float price = a/x;
	
	cout << "Price for " << y << "kg: " << (price*y) << endl;
	cout << "Weight for " << k << "RUB: " << (k/price) << endl;

	system("pause");
	return 0;
}

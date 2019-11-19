
// Practice Day 1

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	float candies, cookies;
	
	cout << "Candies per 1kg: ";
	cin >> candies;
	cout << "Cookies per 1kg: ";
	cin >> cookies;
	
	cout << "300g of candies & 400g of cookies: " << ((candies*.3)+(cookies*.4)) << endl;
	cout << "Three times 2kg of cookies & 1.8kg of candies: " << (3.0*((cookies*2.0)+(candies*1.8))) << endl;

	system("pause");
	return 0;
}

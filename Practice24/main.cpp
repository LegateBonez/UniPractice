
// Practice Day 1

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	float days, discount, sum;
	
	cin >> days >> discount >> sum;
	
	for(int i = 0; i < days; i++)
	{
		sum += 3.0;
		sum += sum*(discount/100);
	}
	
	cout << sum << endl;

	system("pause");
	return 0;
}

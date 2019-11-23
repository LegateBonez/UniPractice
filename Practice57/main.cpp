
// Practice Day 2

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	const int mdays[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int dd, mm, yyyy;
	
	cin >> dd >> mm >> yyyy;;
	
	if((yyyy > 0) && ((mm >= 1) && (mm <= 12)) && (dd == mdays[mm-1]))
	{
		cout << "yes";
	}
	else cout << "no";
	
	cout << endl;
	
	system("pause");
	return 0;
}

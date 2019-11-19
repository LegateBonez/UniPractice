
// Practice Day 1

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	int x;
	
	cin >> x;
	
	switch(x)
	{
		case 1: case 2: case 12:
		{
			cout << "Winter";
			break;
		}
		case 3: case 4: case 5:
		{
			cout << "Spring";
			break;
		}
		case 6: case 7: case 8:
		{
			cout << "Summer";
			break;
		}
		case 9: case 10: case 11:
		{
			cout << "Fall";
			break;
		}
		default:
		{
			cout << "Invalid Input" << endl;
			return 0;
		}
	}
	
	cout << endl;
	
	system("pause");
	return 0;
}


// Practice Day 2

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	int m = 1;
	
	for(int i = 1; i <= 37; i++)
	{
		m += i*3;
	}
	
	cout << m << endl;
	
	system("pause");
	return 0;
}

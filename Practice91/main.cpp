
// Practice Day 2

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	float m = 0;
	
	for(int i = 3; i <= 10; i++)
	{
		m += (float)(i-1)/i;
	}
	
	cout << m << endl;
	
	system("pause");
	return 0;
}

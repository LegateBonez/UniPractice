
// Practice Day 2

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	float n;
	cin >> n;
	
	for(int i = 1; i <= 100; i++)
	{
		cout << i << "$ - " << i*n << " p - " << i*n/20 << " kg";
		cout << endl;
	}
	
	system("pause");
	return 0;
}

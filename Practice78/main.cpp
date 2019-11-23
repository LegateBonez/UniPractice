
// Practice Day 2

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	int n;
	
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cout << '*';
		}
		cout << endl;
	}
	
	system("pause");
	return 0;
}


// Practice Day 1

#include <iostream>
#include <string>

using namespace std;

int main()
{
	for(int i = 1; i <= 4; i++)
	{
		for(int j = 1; j <= 13; j++)
		{
			if((j == i) || (j == (8-i)) || (j == (6+i)) || (j == (14-i))) cout << '*';
			else cout << ' ';
		}
		cout << endl;
	}

	system("pause");
	return 0;
}

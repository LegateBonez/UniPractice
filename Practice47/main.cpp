
// Practice Day 1

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	float ar[3];
	float bigboi;
	
	cin >> ar[0];
	bigboi = ar[0];
	for(int i = 1; i < 3; i++) 
		{
			cin >> ar[i];
			if(ar[i] > bigboi) bigboi = ar[i];
		}
	
	cout << bigboi << endl;
	
	system("pause");
	return 0;
}

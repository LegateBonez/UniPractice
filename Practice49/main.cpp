
// Practice Day 1

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	int ar[4];
	int bigboi;
	
	cin >> ar[0];
	bigboi = ar[0];
	for(int i = 1; i < 3; i++) 
		{
			cin >> ar[i];
			if((ar[i] % 2 == 0) && (ar[i] > bigboi)) bigboi = ar[i];
		}
	
	if(bigboi % 2 == 0) cout << bigboi;
	else cout << "not found";
	
	cout << endl;
	
	system("pause");
	return 0;
}

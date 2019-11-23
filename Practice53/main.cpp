
// Practice Day 2

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	float ar[3];
	
	for(int i = 0; i < 3; i++) cin >> ar[i];
	
	if((ar[0] > 30) || (ar[1] > 30) || (ar[2] > 30)) cout << "yes";
	else cout << "no";
	
	cout << endl;
	
	system("pause");
	return 0;
}

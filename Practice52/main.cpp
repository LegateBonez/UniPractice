
// Practice Day 2

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	float ar[4];
	
	for(int i = 0; i < 4; i++) cin >> ar[i];
	
	if((ar[0]>5) && (ar[1]>5) && (fmod(ar[2],6) == 0) && (fmod(ar[3],3) != 0)) cout << "yes";
	else cout << "no";
	
	cout << endl;
	
	system("pause");
	return 0;
}

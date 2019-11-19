
// Practice Day 1

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	float ar[3];
	
	for(int i = 0; i < 3; i++) cin >> ar[i];
	
	float sum;
	
	for(int i = 0; i < 3; i++) sum += !fmod(ar[i],5) ? ar[i]:0;
	
	if(sum) cout << sum;
	else cout << "error";
	
	cout << endl;
	
	system("pause");
	return 0;
}

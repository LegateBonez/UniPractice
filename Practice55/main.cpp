
// Practice Day 2

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	float ar[3];
	int pcount = 0;
	
	for(int i = 0; i < 3; i++) 
	{
		cin >> ar[i];
		if(ar[i] > 0) pcount++;
	}
	
	cout << pcount;
	
	cout << endl;
	
	system("pause");
	return 0;
}

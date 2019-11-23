
// Practice Day 2

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool diffDig(int n) 
{
	static bool digits[10];
	int i;
	for(i = 0; i < 10; i++) digits[i] = false;
	while(n != 0) 
	{
		i = n % 10;
		if(digits[i]) return false;
		digits[i] = true;
		n /= 10;
	}
	return true;
}

int main()
{
	for(int i = 1000; i <= 9999; i++)
	{
		if(diffDig(i)) cout << i << endl;
	}
	
	system("pause");
	return 0;
}

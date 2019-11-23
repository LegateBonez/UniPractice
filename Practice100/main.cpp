
// Practice Day 2

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool fsDig(int n) 
{
	int i;
	while(n != 0) 
	{
		i = n % 10;
		if(i == 5 || i == 6) return false;
		n /= 10;
	}
	return true;
}

int main()
{
	for(int i = 1000; i <= 9999; i++)
	{
		if(fsDig(i)) cout << i << endl;
	}
	
	system("pause");
	return 0;
}

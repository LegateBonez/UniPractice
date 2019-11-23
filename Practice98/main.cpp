
// Practice Day 2

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	double l = 10, n, m = 0;
	cin >> n;
	
	for(int i = 1; i <= 10; i++)
	{
		cout << "Day " << i << " : " << l << "km" << endl;
		l *= 1.10;
	}
	
	cout << endl;

	l = 10;
	m = 10;
	for(int i = 2; i <= 7; i++)
	{
		l *= 1.10;
		m += l;
	}
	cout << "Summary in 7 days: " << m << "km" << endl;
	
	l = 10;
	m = 10;
	
	for(int i = 2; i <= n; i++)
	{
		l *= 1.10;
		m += l;
	}
	cout << "Summary in " << n << " days: " << m << "km" << endl;
	
	l = 10;
	for(int i = 1; i <= 10; i++)
	{
		l += 1.10;
		if(l > 80) cout << "Day " << i-1 << " is the right time to stop";
	}
	
	cout << endl;
	
	system("pause");
	return 0;
}

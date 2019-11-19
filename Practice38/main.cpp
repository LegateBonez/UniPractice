
// Practice Day 1

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	int x, y;
	
	cin >> x >> y;
	
	if(((x-y)==100) || ((y-x)==100)) cout << "yes";
	else cout << "No";
	
	cout << endl;
	
	system("pause");
	return 0;
}

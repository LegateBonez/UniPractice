
// Practice Day 2

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	int d1, m1, y1, d2, m2, y2;
	
	cin >> d1 >> m1 >> y1 >> d2 >> m2 >> y2;
	
	if(y2 > y1) cout << "yes";
	else if(m2 > m1) cout << "yes";
	else if(d2 > d1) cout << "yes";
	else cout << "no";
	
	cout << endl;
	
	system("pause");
	return 0;
}

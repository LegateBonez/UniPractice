
// Practice Day 2

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	int rdir, rcmd;
	
	cin >> rdir >> rcmd;
	
	rdir += rcmd;
	if(rdir > 14) rdir = 11;
	else if(rdir < 11) rdir = 14;
	
	switch(rdir)
	{
		case 11:
			cout << "North";
			break;
		case 12:
			cout << "West";
			break;
		case 13:
			cout << "South";
			break;
		case 14:
			cout << "West";
			break;
		default:
			cout << "The robot went mad :(";
			break;
	}
	
	cout << endl;
	
	system("pause");
	return 0;
}

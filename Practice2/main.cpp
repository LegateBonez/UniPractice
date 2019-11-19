
// Practice Day 1

#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main()
{
	string dow[]={"Sunday","Monday","Tuesday","Wednesday",
				  "Thursday","Friday","Saturday"};
	string month[]={"January","February","March",
					"April","May","June","July",
					"August","September","October",
					"November","December"};

	time_t now = time(0);
	tm *uptime = localtime(&now);
	
	cout << dow[uptime->tm_wday] << endl;
	cout << month[uptime->tm_mon] << endl;
	cout << "Dima of IT1903" << endl;

	system("pause");
	return 0;
}

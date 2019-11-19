
// Practice Day 1

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	float ar[3];

	for(int i = 0; i < 3; i++) 
		{
			cin >> ar[i];
		}
		
	if(((ar[0]+ar[1]) >= (ar[0]+ar[2])) && ((ar[0]+ar[1]) >= (ar[1]+ar[2]))) cout << ar[0] << " " << ar[1];
	else if(((ar[0]+ar[2]) >= (ar[0]+ar[1])) && ((ar[0]+ar[2]) >= (ar[1]+ar[2]))) cout << ar[0] << " " << ar[2];
	else cout << ar[1] << " " << ar[2];
	
	cout << endl;
	
	system("pause");
	return 0;
}


// Practice Day 2

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	float ar[3];
	
	for(int i = 0; i < 3; i++) cin >> ar[i];
	
	if(
		(!(ar[0]<5) && (ar[1]<5) && (ar[2]<5)) ||
		((ar[0]<5) && !(ar[1]<5) && (ar[2]<5)) ||
		((ar[0]<5) && (ar[1]<5) && !(ar[2]<5))
	  )
	  {
		  cout << "yes";
	  }
	else cout << "no";
	
	cout << endl;
	
	system("pause");
	return 0;
}

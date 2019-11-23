
// Practice Day 2

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool sumqual(int a, int b, int c)
{
	if(a+b == c) return true;
	else return false;
}

int main()
{
	int ar[3];
	
	for(int i = 0; i < 3; i++) cin >> ar[i];
	
	if(sumqual(ar[0],ar[1],ar[2]) || sumqual(ar[0],ar[2],ar[1]) || sumqual(ar[1],ar[2],ar[0])) cout << "yes";
	
	cout << endl;
	
	system("pause");
	return 0;
}

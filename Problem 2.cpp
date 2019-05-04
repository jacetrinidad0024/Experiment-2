#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	int a, b;
	
	cout << "Enter the number of water used in gallons: ";
	cin >> a;
	cout << "Enter any unpaid balance: ";
	cin >> b;
	
	if ( b > 0)
	{
		cout << "Total bill: " << 35 + (a * 1.10) + 20;
	}
	
	else
	{
		cout << "Total bill: " << 35 + (a * 1.10);
	}
	
	return 0;
}

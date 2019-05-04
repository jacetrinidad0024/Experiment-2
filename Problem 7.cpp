#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	int x, n, sum;
	
	cout << "Enter a number: ";
	cin >> n;
	
	while (n>0)
	{
		sum = 0;
		
	for ( x = 1; x <= n; x++)
	{
		sum += x;
	}
		cout << "The sum of all whole numbers from 1 to " 
		<< n << " is " << sum << endl;
		cout << "Enter a number: ";
		cin >> n;
	}
		cout << "Thank you!";
		
	return 0;
}

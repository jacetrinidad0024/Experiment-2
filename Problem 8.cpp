#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	int num, x;
	
	cout << "Enter a number: ";
	cin >> num;
	
	cout << "Multiplication table of " << num << ":" << endl;
	
	for (x = 1; x <= 10; x++)
	{
		cout << num <<  " * " <<  x <<  " = " << num * x;
		cout << "\n";
	}
	
	return 0;
}

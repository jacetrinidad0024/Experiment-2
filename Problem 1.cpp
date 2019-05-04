#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	int A=995, B=1495, C=1995, pA, hours, total, TotalBill;
	char choice;
	
	cout << "Package A: For P995/mo 10 hrs of access are provided. Additional hours are P20/hr." 
	<< endl;
	cout << "Package B: For P1495/mo 20 hrs of access are provided. Additional hours are P10/hr."
	<< endl;
	cout << "Package C: For P1995/mo of unlimited access is provided."
	<< endl;
	cout << " " << endl;
	
	cout << "Enter package (A, B, C): ";
	cin >> choice;
	
	switch (choice)
	{
		case 'A':
		case 'a':
			cout << "Enter hours used: ";
			cin >> hours;
			
			total = A + ((hours - 10) * 20);
			cout << "Total bill: " << total << "\n" << endl;
			
			break;
			
		case 'B':
		case 'b':
			cout << "Enter hours used: ";
			cin >> hours;
			
			total = B + ((hours - 20) * 10);
			cout << "Total bill: " << total << "\n" << endl;
			break;
			
		case 'C':
		case 'c':
			total = C;
			cout << "Total bill: " << total << "\n" << endl;
			break;
	} 
	
	_getch ();
	return 0;
}

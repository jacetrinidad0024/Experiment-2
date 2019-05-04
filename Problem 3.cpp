#include <iostream>
#include <conio.h>
#include <cmath>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main ()
{
	int x;
	float V, y, z;
	
	z = 2.5;
	
	cout << "Enter the value of x: " << endl;
	cin >> x;
	cout << "Enter the value of y: " << endl;
	cin >> y;
	cout << "z is equals to 2.5" << endl;
	
	switch (x)
	{
		case 1: 
		if ( x = 1 && 1 < y < 5 ) 
			V = x * y * z;

		if 
		( x = 1 && y >= 5 )
			V = (x+(y/z));
		break;
		
		case 2: 
		if ( x = 2 && y <= 5)
			V = abs((x-y)/z);
		
		else if
			( x = 2 && y > 5)
			V = x - (sqrt(y+z));
			break;
				
			default: V = x + y + z;
			break;
			
	}
		cout << fixed << setprecision (2);
		cout << setw(10) << V;
		
	_getch ();
	return 0;
}

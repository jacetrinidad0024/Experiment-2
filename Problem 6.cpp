#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	int a, first=0, second=1, third;
	cout << "Fibonacci numbers: " << endl;
	
	for (int a = 0; a < 22; a++)
	{
		if (a <= 1)
		third = a;
		
		else
		{
			third = first + second;
			first = second;
			second = third;
		}
	
		cout << third << ",";
	}
	
	return 0;
}

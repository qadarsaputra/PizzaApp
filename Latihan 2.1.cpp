#include <iostream>
#include <conio.h>

using namespace std;
main () {
	int y [] = {1, 2, 7, 4, 5};
	int n, r=0;
	for ( n=0 ; n <5 ; n++)
	{
		r += y[n];
	}
	cout << " " <<r;
	getch();
}

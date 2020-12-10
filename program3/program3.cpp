// program3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int num = 0;
	int counter = 0;
	// Output the first line

	cout << "The number generated is ";

	// Use a continuous loop
	for (int i = 0; i < 100; i++){
		num = rand() % 100;								// Generate random numbers up to 99

		cout << " " << num;

		if (i % 10 == 0){								// Print 10 numbers per line
			cout << endl;								// Skip 1 line
		}
		if (num == 9){
			counter++;
		}

	}

	cout << endl;										// Skip a line
	cout << "There are " << counter << " nine's" << endl;
	return 0;
}


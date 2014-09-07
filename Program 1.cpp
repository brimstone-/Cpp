//
//  main.cpp
//  Program 1
//
//  Created by Matthew Cheng 2015 on 7/10/14.
//  Copyright (c) 2014 Matthew Cheng 2015. All rights reserved.
//

//precompiler directives:
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
	//*******Problem 1*******

	for (int ind = 1; ind <= 4; ind++) {
		int nbr = 7;
		for (int ind = 1; ind <= 4; ind++) {
			cout << nbr << " ";
			nbr++;
		}
		cout << endl;
	}

	cout << endl;
	for (int ind = 1; ind <= 4; ind++) {
		int nbr2 = 2;
		cout << "* ";
		for (int ind = 2; ind <= 10; ind += 2) {
			cout << nbr2 << " ";
			nbr2 += 2;
		}
		cout << endl;
	}

	cout << endl;
	for (int ind = 1; ind <= 4; ind++) {
		int nbr = 1;
		int counter = 1;
		for (int ind = 1; ind <= 9; ind++) {
			cout << nbr << " ";
			nbr++;
			counter++;
			if (counter == 5) {
				cout << "0 ";
			}
		}
		cout << endl;
	}


	//*******Problem 2*******

	cout << "\n\n" << endl;

	for (int ind = 1; ind <= 3; ind++) {
		int nbr = 1;
		for (int ind = 1; ind <= 3; ind++) {
			cout << "A " << nbr << " ";
			nbr++;
		}
		cout << endl;
	}

	cout << endl;

	for (int ind = 1; ind <= 4; ind++) {
		cout << "<";
		for (int ind = 1; ind <= 10; ind++) {
			cout << "*";
		}
		for (int ind = 1; ind <= 1; ind++) {
			cout << ">";
		}
		cout << endl;
	}

	cout << endl;
	for (int ind = 1; ind <= 3; ind++) {
		int nbr = 1;
		for (int ind = 1; ind <= 4; ind++) {
			cout << nbr << " ";
			nbr++;
		}
		cout << endl;
		int nbr2 = 4;
		for (int ind = 1; ind <= 4; ind++) {
			cout << nbr2 << " ";
			nbr2--;
		}
		cout << endl;
	}

	//*******Problem 3*******

	cout << "\n\n" << endl;

	for (int ind = 1; ind <= 3; ind++) {
		for (int ind = 1; ind <= 1; ind++) {
			cout << "$ ";
			int nbr3 = 1;
			for (int ind = 1; ind <= 5; ind++) {
				cout << nbr3 << " ";
				nbr3++;
			}
		}
		for (int ind = 1; ind <= 2; ind++) {
			cout << "# ";
			int nbr4 = 1;
			for (int ind = 1; ind <= 5; ind++) {
				cout << nbr4 << " ";
				nbr4++;
			}
		}
		cout << "$" << endl;
	}

	cout << "\n\ndone\n\n\n\n";
	return 0;
}

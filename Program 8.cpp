//
//  main.cpp
//  Program 8
//
//  Created by Matthew Cheng 2015 on 7/9/14.
//  Copyright (c) 2014 Matthew Cheng 2015. All rights reserved.
//

//precompiler directives:
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;

int main(  )
{
	
	//*******Problem 1*******
	
	int num, counter = 1;
	
	do {
		num = counter *2 ;
		cout << counter << " Doubled is " << num << endl;
		counter++;
	} while (counter <= 5);
	
	cout << "\n\ndone\n\n\n";
	
	//*******Problem 2*******
	
	cout << "Number Comparer" << endl;
	double a, b;
	cout << "\nPlease input number 1: ";
	cin >> a;
	cout << "\nPlease input number 2: ";
	cin >> b;
	
	if (a > b) {
		cout << "\n";
		cout << a << " > " << b << endl;
		cout << "\nLARGER" << endl;
	}
	else if (b > a) {
		cout << "\n";
		cout << a << " < " << b << endl;
		cout << "\nSMALLER" << endl;
	}
	else {
		cout << "\n";
		cout << a << " = " << b << endl;
		cout << "\nEQUAL" << endl;
	}
	
	
	return 0;
}
	

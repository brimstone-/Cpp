//
//  main.cpp
//  Program 13
//
//  Created by Matthew Cheng 2015 on 7/11/14.
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
	cout << "\n\n\n";
	
	//*******Problem 1*******
	
	double pop = 1700;
	cout << setiosflags(ios::fixed) << setprecision (0);
	
	for (int ind = 1 ; ind <= 8 ; ind++) {
		pop += pop * .04;
	}
	
	cout << "The population after 8 years will be " << pop << endl;
	cout << "\n\n" << endl;
	
	//*******Problem 2*******;
	
	cout << setiosflags (ios::fixed) << setprecision (2);
	
	ifstream file1 ("jobs.dat");
    
    if (!file1) {
    	cout << "File could not be found!" << endl;
		exit(0);
	}
	
	double rate, pay, totalpay;
	int hours;
	
	for (int ind = 1 ; ind <=5 ; ind++) {
		
		file1 >> hours;
		file1 >> rate;
		pay = hours * rate;
		totalpay += pay;
		cout << "\nThe total amount Ann makes working " << hours << " at $" << rate << " an hours is $" << pay << endl;
		
	}
	
	cout << "\nThe total amount of money Ann makes in a week is $" << totalpay << endl;
	
	file1.close ();
	
	//*******Problem 3*******
	
	ifstream file2 ("rooms.dat");
	
	if (!file2) {
		cout << "\n\nFile could not be found!" << endl;
		exit(0);
	}
	
	int length, width, area, totalarea = 0;
	
	for (int ind = 1 ; ind <= 5 ; ind++) {
		
		file2 >> length;
		file2 >> width;
		area = length * width;
		totalarea += area;
		
	}
	
	file2.close ();
	
	cout << "\n\nThe total area of the factory is " << totalarea << " ft." << endl;
	
	//*******Problem 4*******
	
	double value = 37000;
	
	for (int ind = 1 ; ind <= 5 ; ind++) {
		value = value * .75;
	}
	
	cout << "\n\nAfter 5 years, Hook-U's truck will be worth $" << value << endl;
	
	
	cout << "\n\ndone\n\n\n\n";
    system ("pause");
    return 0;
}

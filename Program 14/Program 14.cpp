//
//  main.cpp
//  Program 14
//
//  Created by Matthew Cheng 2015 on 7/13/14.
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
	
	ifstream file1 ("nbrs1.dat");
	
	if (!file1) {
		cout << "File could be found!" << endl;
        exit(0);
	}
	
	int nbr1, nbr2, ans;
	
	for (int ind = 1 ; ind <= 3 ; ind++) {
		file1 >> nbr1;
		file1 >> nbr2;
		if (nbr1 < 0) {
			ans = nbr1 * nbr2;
			cout << ans << endl;
		}
		else {
			ans = nbr1 + nbr2;
			cout << ans << endl;
		}
	}
	
	file1.close ();
	
	//*******Problem 2*******
	
	cout << "\n\n" << endl;
	
	ifstream file2 ("nbrs2.dat");
	
	if (!file2) {
		cout << "File could be found!" << endl;
        exit(0);
	}
	
	for (int ind = 1 ; ind <= 3 ; ind++) {
		file2 >> nbr1;
		file2 >> nbr2;
		if (nbr1 > 0 && nbr2 < 0) {
			cout << nbr1 << endl;
		}
		else if (nbr1 > 0 && nbr2 > 0) {
			cout << nbr2 << endl;
		}
		else {
			int sum;
			sum = nbr1 + nbr2;
			cout << sum << endl;
		}
	}
	
	file2.close ();
	
	//*******Problem 3*******
	
	cout << "\n\n" << endl;
	
	cout << setiosflags (ios::fixed) << setprecision(2);
	
	ifstream file3 ("employees.dat");
	
	if (!file3) {
		cout << "File could be found!" << endl;
        exit(0);
	}
	
	string employee;
	double rate, pay, hours;
	cout << setw(9) << "Employee" << setw(29) << "Regular Hourly Rate ($)" << setw(16) << "Hours Worked" << setw(14) << "Pay ($)\n" << endl;
	for (int ind = 1 ; ind <=3 ; ind++) {
		file3 >> employee;
		file3 >> rate;
		file3 >> hours;
		if (hours <=40) {
			pay = hours * rate;
		}
		else {
			pay = 40 * rate + ((hours - 40) * (rate * 1.5));
		}
		cout << setw(9) << employee << setw(10) << rate << setw(28) << hours << setw(19) << pay << endl;
	}
	
	
	file3.close ();
	
	
	
	cout << "\n\n\ndone\n\n" << endl;
	return 0;
}

//
//  main.cpp
//  Data Files Example
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

int main(  )
{
    cout << "\n\n\n";

    //*******Problem 1*******
    
    ifstream file1 ("nbrs1.dat");
    
    if (!file1) {
    	cout << "File could not be found!" << endl;
		exit(0);
	}
	
	double nbr;
	int ctr = 1;
	
	for (int ind = 1 ; ind <= 10 ; ind++) {
		while (file1 >> nbr && ctr <= 10) {
			if (nbr > 25) {
				cout << nbr << endl;	
			}
			ctr++;
		}
	}
	
	file1.close ();
	cout << "\n\n" << endl;
    
    //*******Problem 2*******
    
    double braked, reactd, totald;
    
    cout << setw(11) << "Speed (MPH)" << setw(30) << "Reaction Distance (ft)" << setw(30) << "Braking Distance (ft)" << setw(30) << "Total Distance (ft)\n" << endl;
    
    double speed = 25;
    
    for (int ind = 25 ; ind <= 90 ; ind += 5) {
        cout << setiosflags(ios::fixed) << setprecision (2);
        cout << setw(2) << speed;
    	reactd = (speed * 5200) / (7200);
		cout << setw(19) << reactd;
		braked = .06 * speed * speed;
		cout << setw(32) << braked;
        totald = braked + reactd;
    	cout << setw(31) << totald;
		speed += 5;	
        cout << endl;
	}
    
  	cout << "\n\n" << endl;
  	
  	//*******Problem 3*******
    
    int year = 1;
    double rate = 0.05;
    double sum = 500;
    
    cout << setw(10) << "Year" << setw(20) << "Amount (USD)" <<endl;
    
    for (int ind = 1 ; ind <= 10 ; ind++) {
    	sum += rate * sum;
    	cout << setw(8) << year << setw(16) << sum << endl;
    	year++;
    }
    
    
    cout << "\n\ndone\n\n\n\n";
    system ("pause");
    return 0;
}

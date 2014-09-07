//
//  main.cpp
//  Extra Credit
//
//  Created by Matthew Cheng 2015 on 7/16/14.
//  Copyright (c) 2014 Matthew Cheng 2015. All rights reserved.
//

//precompiler directives:
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;

void getData (int &nbr1, int &nbr2);

string nbrType (int sum, int ind);

int primeCount (string nbrType);

int defCount (string nbrType);

int abundCount (string nbrType);

int perfCount (string nbrType);

int main(  )
{
    int nbr1, nbr2;
    getData(nbr1, nbr2);
    int nbr = nbr2;
    int sum, ctr, truSum;
    string type;
    int prime = 0, def = 0, abund = 0, perf = 0;
    
    cout << setiosflags (ios::left);
    cout << "\n\n" << endl;
    cout << setw(10) << "Number" << setw(20) << "Sum of Divisors" << setw(10) << "Type\n" << endl;
    
    for (int ind = nbr1 ; ind <= nbr2 ; ind++) {
    	sum = 0;
        for (int check = 1; check <= 16; check++) {
            if (ind % check == 0) {	
                sum = sum + check;
            }
        }
        truSum = sum-ind;
        type = nbrType (truSum, ind);
        prime += primeCount (type);
        def += defCount (type);
        abund += abundCount (type);
        perf += perfCount (type);
		cout << setw(10) << ind << setw(20) << truSum << setw (15) << type << endl;
    }
    
    cout << "\n\n" << endl;
	cout << setw(15) << "Prime:" << prime << endl;
	cout << setw(15) << "Deficient:" << def << endl;
	cout << setw(15) << "Abundant:" << abund << endl;
	cout << setw(15) << "Perfect:" << perf << endl;
    
    cout << "\n\ndone\n\n\n\n";
    return 0;
}

void getData (int &nbr1, int &nbr2)
{
    cout << "What is the first number? ";
    cin >> nbr1;
    cout << "What is the second number? ";
    cin >> nbr2;
}

string nbrType (int sum, int ind)
{
    if (sum == 1){
    	return "prime";
	}
	else if (sum < ind) {
		return "deficient";
	}
	else if (sum > ind) {
		return "abundant";
	}
	else {
		return "perfect";
	}
}

int primeCount (string nbrType)
{
	if (nbrType == "prime") {
		return 1;
	}
	else {
		return 0;
	}
}

int defCount (string nbrType)
{
	if (nbrType == "deficient") {
		return 1;
	}
	else {
		return 0;
	}
}

int abundCount (string nbrType)
{
	if (nbrType == "abundant") {
		return 1;
	}
	else {
		return 0;
	}
}

int perfCount (string nbrType)
{
	if (nbrType == "perfect") {
		return 1;
	}
	else {
		return 0;
	}
}

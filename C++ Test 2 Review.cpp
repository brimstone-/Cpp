//precompiler directives:
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;

int main(  )
{
	//*******Problem 1a*******
	int nbr = 5;
	while (nbr <= 11) {
		cout << nbr << " ";
		nbr += 1;
	}
	cout << "\n\ndone\n" << endl;
	
	//*******Problem 1b*******
	int nmr = 5;
	while (nmr <= 13){
		cout << nmr << endl;
		nmr += 2;
	}
	cout << "\ndone\n" << endl;
	
	//*******Problem 3*******
	int number;
	do {
		cout << "\nPlease input a non-negative number less than 20: ";
		cin >> number;
		if (number < 0 || number > 20){
			cout << "\nPlease enter a valid number (non negative and less than 20).";
			}
		} while (number < 0 || number > 20);
	cout << "\nThank you!" << endl;	
	
	//*******Problem 4*******
	
	int num;
	int sum = 0;
	do {
		cout << "\n\nPlease enter a number: ";
		cin >> num;
		if (num < 0) {
			cout << "\nPlease enter a valid number (non-negative positive number)";
		}
	} while (num < 0);
	
	do {
			if (num%2 == 0 || num%3 == 0) {
				sum += num;
			}
			num -= 1;
		}while (num >= 0);
			
	cout << "\nThe sum of the integers less than or equal to " << num << " that are divisible by 2 or 3 is " << sum << endl;
	cout << "\n\ndone\n\n" << endl;
	
	
	return 0;
}

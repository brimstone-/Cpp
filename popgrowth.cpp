#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <limits>
#include <windows.h>
#include <string>

using namespace std;

class KeepRunning {
  public:
    ~KeepRunning() {
    	
    cout << "This is a program that will calculate a population after a certain\nnumber of years at a certain rate of growth.\nEnter a value of [-999] at any time to end the program.\n" << endl;
	
	double pop1, pop2, rate, rateorig;
	int years;
	
	while (true) {
		
		do {
		
		cout << "\nPlease enter the population: ";
		
			
		while(!(cin >> pop1)){
			cin.clear();
    	    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << "\n\nPlease enter in a valid number for the population (non-negative integer)." << endl;
			cout << "\n\nPlease enter the population: ";
			
			}
			
			if (pop1 == -999) {
			cout << "\n\nSee you next time!\n" << endl;
			cout << "Press ENTER to continue..." << endl;
			cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
			cin.get();
			exit(0);	
			}
		
			else if (pop1 != int(pop1) || pop1 < 0) {
				cout << "\n\nPlease enter in a valid number for the population (non-negative integer).\n" << endl;
			}
			
		
		} while (pop1 != int(pop1) || pop1 < 0);
		
		do {
			
			cout << "\nPlease enter the number of years: ";
			
			while(!(cin >> years)){
			cin.clear();
    		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << "\n\nPlease enter in a valid number for the number of years (non-negative integer).";
			cout << "\n\nPlease enter the number of years: ";
			}
			
			if (years == -999) {
			cout << "\n\nSee you next time!\n" << endl;
			cout << "Press ENTER to continue..." << endl;
			cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
			cin.get();
			exit(0);	
			}
			
			else if (years != int(years) || years < 0) {
				cout << "\n\nPlease enter in a valid number for the number of years (non-negative integer).\n";
			}
			
		} while (years != int(years) || years < 0);	
			
		do {	
		
		cout << "\nPlease enter the percent rate of growth: ";
			
		while(!(cin >> rate)){
			
		cin.clear();
   	    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		cout << "\n\nPlease enter in a valid number for the rate of growth (some real number).";
		cout << "\n\nPlease enter the percent rate of growth: ";
		
		}
		
		if (rate == -999) {
			cout << "\n\nSee you next time!\n" << endl;
			cout << "Press ENTER to continue..." << endl;
			cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
			cin.get();
			exit(0);	
			}
		
		} while (rate == -999);
		
		pop2 = pop1;
		rateorig = rate;
		rate = rate / 100;
		
		for (int ind = 1 ; ind <= years ; ind++) {
			pop1 += pop1 * rate;
		}
		
		cout << setiosflags (ios::fixed) << setprecision (0);
		cout << "\nThe population of " << pop2 << " after " << years << " years at a rate of growth of " << rateorig << "% will be \n\n" << pop1 << endl;
		cout << "\n\ndone\n\n\n\n";
		cout << "\nPress ENTER to continue...\n" << endl;
		cin.get();
		cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
		cout << "\n\n";
		system ("CLS");
		cout << "This is a program that will calculate a population after a certain\nnumber of years at a certain rate of growth.\nEnter a value of [-999] at any time to end the program.\n" << endl;
  	 	}
    }
};

int main(  )
{
	KeepRunning kr;
}

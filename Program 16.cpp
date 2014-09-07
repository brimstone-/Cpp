//
//  main.cpp
//  Program 16
//
//  Created by Matthew Cheng 2015 on 7/15/14.
//  Copyright (c) 2014 Matthew Cheng 2015. All rights reserved.
//

//precompiler directives:
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>

double convert (double number);

void getData (double &grade1, double &grade2, double &grade3, double &weight1, double &weight2, double &weight3);

double gradeCalc (double grade1, double grade2, double grade3, double weight1, double weight2, double weight3);

void print (double grade1, double grade2, double grade3, double weight1, double weight2, double weight3, double final);

using namespace std;

int main(  )
{
    double grade1, grade2, grade3, weight1, weight2, weight3, weight1orig, weight2orig, weight3orig, final;
    
    while (true) {
    	getData (grade1, grade2, grade3, weight1orig, weight2orig, weight3orig);
    	weight1 = convert (weight1orig);
    	weight2 = convert (weight2orig);
    	weight3 = convert (weight3orig);
    	final = gradeCalc (grade1, grade2, grade3, weight1, weight2, weight3);
    	print (grade1, grade2, grade3, weight1orig, weight2orig, weight3orig, final);
    }
    cout << "\n\ndone\n\n\n\n";
    return 0;
}

double convert (double number)
{
	return number / 100;
}

void getData (double &grade1, double &grade2, double &grade3, double &weight1, double &weight2, double &weight3)
{
	do {
		cout << "Please enter your grade percentages seperated by spaces: ";
		cin >> grade1 >> grade2 >> grade3;
   		if (grade1 < 0 || grade2 < 0 || grade3 < 0) {
   			cout << "Numbers must be positive, try again." << endl;
		}
	} while (grade1 < 0 || grade2 < 0 || grade3 < 0);
	
	do {
		cout << "Please enter the weight each test grade has [grade weights must add up to 100%]: ";
		cin >> weight1 >> weight2 >> weight3;
		if (weight1 + weight2 + weight3 !=100) {
			cout << "The total sum of the weights of the tests much equal 100, try again." << endl;
		}
	} while (weight1 + weight2 + weight3 !=100);
}

double gradeCalc (double grade1, double grade2, double grade3, double weight1, double weight2, double weight3)
{
	return grade1 * weight1 + grade2 * weight2 + grade3 * weight3;
}

void print (double grade1, double grade2, double grade3, double weight1, double weight2, double weight3, double final)
{
	cout << "You entered a test 1 score of " << grade1 << "% weighted at " << weight1 << "%" << endl;
	cout << "You entered a test 2 score of " << grade2 << "% weighted at " << weight2 << "%" << endl;	
	cout << "You entered a test 3 score of " << grade3 << "% weighted at " << weight3 << "%" << endl;
	cout << "Your total score is " << final << "%" << endl;
}

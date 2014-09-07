//
//  main.cpp
//  Program 5
//
//  Created by Matthew Cheng 2015 on 7/8/14.
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

double mortgage, down;
cout << "\nPlease enter the mortgage cost here and press enter: " <<endl;
cin >> mortgage;

if (mortgage<=0 || mortgage>100000){
	cout << "\nYou entered an invalid amount of money, please enter a value between $0 and $100,000" <<endl;
	return 0;
}
else if (mortgage<=50000){
	down = mortgage * 0.02;
}
else if (mortgage<=75000){
	down = 50000 * 0.02 + (mortgage - 50000)*0.2;
}
else if (mortgage<=100000){
	down = (50000*0.02)+(25000*0.2)+((mortgage - 75000)*.25);
}

	cout << "\nThe down payment required for a mortgage of $" << mortgage << " is = $" << down <<endl;


//*******Problem 2*******

double t1, t2, t3, t4, total;
cout << "\n\nPlease input your test grades one by one, hitting enter after each: " <<endl;

cin >> t1;
cin >> t2;
cin >> t3;
cin >> t4;

total = t1 + t2 + t3 + t4;
if (total>260){
	cout << "\nCongratulations, you've passed!" <<endl;
}
else {
	cout << "\nSorry, you have failed." <<endl;
}


/*
cout << "\nEnter any key and press enter to continue: " <<endl;
double key;
cin >> key;
*/


return 0;
}

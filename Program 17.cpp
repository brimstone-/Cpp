//
//  main.cpp
//  Program 17
//
//  Created by Matthew Cheng 2015 on 7/15/14.
//  Copyright (c) 2014 Matthew Cheng 2015. All rights reserved.
//

//precompiler directives:
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;

void getData (double &x1, double &x2, double &y1, double &y2);

double distanceCalc (double x1, double x2, double y1, double y2);

double midpoint1 (double x1, double x2);

double midpoint2 (double y1, double y2);

double slope (double x1, double x2, double y1, double y2);

int diagnose(int choice);

int main()
{
    int choice;
    double x1, x2, y1, y2, choiceCheck;
	do {
        cout << "\n\nPlease pick a formula to use, <1> <2> <3> or <4> to exit. " << endl;
        cout << "<1> Distance" << endl;
        cout << "<2> Midpoint" << endl;
        cout << "<3> Slope" << endl;
        cout << "<4> Exit" << endl;
        cin >> choice;
        
        choiceCheck = diagnose(choice);
        
        if (choice == 1) {
            getData(x1, x2, y1, y2);
            cout << "\nThe distance is " << (double)distanceCalc(x1, x1, y1, y2) << "\n\n" << endl;
        }
        else if (choice == 2) {
            getData(x1, x2, y1, y2);
            cout << "\nThe Midpoint is (" << midpoint1(x1, x1) << "," << midpoint2(y1, y2) << ")" << "\n\n" << endl;
        }
        else if (choice == 3) {
            double theSlope;
            getData(x1, x2, y1, y2);
            theSlope = slope(x1, x1, y1, y2);
            if (theSlope == 0){
                cout << "\nThe line is vertical, therefore the slope is undefined." << endl;
            }
            else {
            cout << "\nThe Slope is " << slope  << "\n\n" << endl;
            }
        }
        else if (choice == 4) {
            cout << "\n\nThank you, come again" << endl;
            cout << "\nPlease hit <ENTER> to continue";
            cin.get();
            cin.clear();
            //cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n' );
            exit (-1);
        }
        else {
            cout << "\n\nBad input, please try again" << endl;
        }
    } while (true);
}

void getData (double &x1, double &x2, double &y1, double &y2)
{
    cout << "\nPlease enter the coordinates of your two points x1, x2, y1, and then y2." << endl;
    cout << "\nPlease enter x1: ";
    cin >> x1;
    cout << "\nPlease enter y1: ";
    cin >> y1;
    cout << "\nPlease enter x2: ";
    cin >> x2;
    cout << "\nPlease enter y2: ";
    cin >> y2;
}

double distanceCalc (double x1, double x2, double y1, double y2)
{
    cout << setiosflags(ios::fixed) << setprecision(2);
    double dist = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
	return dist;
}

double midpoint1 (double x1, double x2)
{
	return ((x1+x2) / 2);
}

double midpoint2 (double y1, double y2)
{
	return ((y1+y2) / 2);
}

double slope (double x1, double x2, double y1, double y2)
{
    double denom = (x1-x2);
    if (denom == 0) {
        return 0;
    }
    else {
        return (y2-y1) / (x1-x2);
    }
}

int diagnose (int choice)
{
    if (choice != 1 || choice != 2 || choice != 3 || choice != 4) {
        return 7;
    }
    else {
        return choice;
    }
}

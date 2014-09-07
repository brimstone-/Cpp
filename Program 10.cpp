//
//  main.cpp
//  Program 10
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
    cout << "\n";
    
    //*******Problem 1*******
    cout << "\nThis is a program that will find the average of five numbers.\n" << endl;
    
    double thesum = 0;
    double a;
    int counter = 0;
    double average;
    for (int ind = 1; ind <= 5; ind++) {
        cout << "Please input the number: ";
        cin >> a;
        thesum += a;
        counter++;
    }
    
    average = (double)thesum/counter;
    cout << "\nThe average is = " << average << endl;

    //*******Problem 2*******
    cout << "\nThis program will find the product of five numbers.\n" << endl;
    
    double product = 1, b;
    for (int ind = 1; ind <= 5; ind++) {
        cout << "Please input the number: ";
        cin >> b;
        product *= b;
    }
    
    cout <<"\nThe product is = " << product << endl;
    
    //*******Problem 3*******
    
    int sum = 0;
    for (int ind = 25; ind <= 50; ind++) {
        sum += ind;
    }
    
    cout << "\n\nThe sum of the numbers from 25 to 50 is " << sum << endl;
    
    //*******Problem 4*******
    
    int product2 = 1;
    for (int ind = 3; ind <= 11; ind++) {
        if (ind%2 != 0) {
            product2 *= ind;
        }
    }
    
    cout << "\n\nThe product of the odd integers from 3 to 11 is " << product2 << endl;
    
    //*******Problem 5*******
    
    int fracprod = 1;
    
    for (int denom = 2; denom <= 6; denom++) {
        fracprod *= denom;
    }
    double decimal = 1. / fracprod;
    
    cout << "\nThe product of the fractions is 1/" << fracprod << endl;
    cout << "\nThe fraction in decimal form is " << decimal << endl;
    
    cout << "\n\ndone\n\n\n\n";
    system ("pause");
    return 0;
}


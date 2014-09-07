//
//  main.cpp
//  Program 7
//
//  Created by Matthew Cheng 2015 on 7/9/14.
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
    //*******Problem 3*******
    
    double a = 1, y;
    cout << setw(10) << "Number" << setw(15) << "Cubed Root" <<endl;
    do {
        y = pow(a,1/3.);
        if (y < 2.5){
        cout << setw(5) << a << setw(17) << y <<endl;
        a++;
        }
    } while (y<2.5);
    
    //*******Problem 4*******
    
    cout << "\n\n";
    double cost = 1.95, year = 2014;
    cout << setw(10) << "Year" << setw(10) << "Cost" << endl;
    
    do {
        cost += cost * .05;
        year++;
        if (cost < 10) {
        cout << setw(10) << year << setw(7) << "$" << cost << endl;
        }
    } while (cost < 10);
    
    //*******Problem 5*******
    
    cout << "\n\n";
    
    int x;
    int ctr = 0;
    
    do {
        cout << "Please input the value of x: ";
        cin >> x;
        if (x <= 0) {

            cout << "Please input a valid number for x (non-negative integer)." <<endl;
        }
    }while (x <= 0);
    
    cout << "\n";
    
    do {
        if (x%2>0) {
        x = 3*x + 1;
        }
        else {
        x /= 2;
        }
        ctr++;
        cout << x << " ";
    } while (x != 1);
    
    cout << "\n\nThis process took " << ctr << " replacements.";
    
    cout << "\n\ndone\n\n\n\n";
    return 0;
}


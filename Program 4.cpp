//
//  main.cpp
//  Program 4
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
    cout << "\n\n\n";
    double grade;
    cout << "Please input your grade: " <<endl;
    cin >> grade;
    
    if (grade<0){
        cout << "Try entering a real grade." <<endl;
    }
    else if (grade<60){
        cout << "Your grade is an F, you are failing." <<endl;
    }
    else if (grade<70){
        cout << "Your grade is a D, you are on probation." <<endl;
    }
    else if (grade<80){
        cout << "Your grade is a C, you need to work harder." <<endl;
    }
    else if (grade<90){
        cout << "Your grade is a B, you are doing fine." <<endl;
    }
    else
        cout << "Your grade is a A, solid work." <<endl;
    
    double input;
    cout << "Input any key to continue." <<endl;
    cin >> input;
    
    
    cout << "\n\ndone\n\n\n\n";
    return 0;
}


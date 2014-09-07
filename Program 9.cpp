//
//  main.cpp
//  Program 9
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
    cout << "\n\n\n";
    //*******Problem 1*******
    
    double amount, rate, interest,toPrinc = 0, mp, totalInt = 0;
    int month = 1;
    cout << "Amount? ";
    cin >> amount;
    cout << "Rate? ";
    cin >> rate;
    cout << "Payment? ";
    cin >> mp;
    cout << setiosflags(ios::fixed) << setprecision(2);
    cout << setw(10) << "Month" << setw(15) << "Amount" << setw (15) << "Interest" << setw(18) << "To Principal" <<endl;
    
    do {
        amount -= toPrinc;
        interest  = amount * rate * 0.01 / 12;
        totalInt += interest;
        toPrinc = mp - interest;
        
        if (amount < mp) toPrinc = amount;
        
        cout << setw(10) << month << setw(15) << amount << setw (15) << interest << setw(18) << toPrinc <<endl;
        month++;
        
    
    } while (amount >= mp);
    
    cout << "\nTotal Interest Payed: " << totalInt <<endl;



    cout << "\n\ndone\n\n\n\n";
    return 0;
}


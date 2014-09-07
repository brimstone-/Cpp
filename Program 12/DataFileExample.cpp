//
//  main.cpp
//  Data Files Example
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
    cout << "\n\n\n";
    
    //Read numbers from nbrs.dat
    //Find average
    //Print all values greater than average
    
    ifstream file1 ("nbrs1.dat");
    ofstream file2 ("bignbrs.dat");
    
    
    if (!file1) {
        cout << "File could be found!" << endl;
        exit(0);  //Stops the program, number inside the parentheses does not matter.
    
    }
    
    double sum = 0, nbr;
    int ctr = 0;
    
    while (file1 >> nbr) {
        sum += nbr;
        ctr++;
    }
    
    file1.close();
    
    double ave = sum / ctr;
    cout << "\nThe average of the numbers is " << ave << "\n" << endl;

    file1.open ("nbrs1.dat");
    
    cout << "The numbers that are larger than the average are:" << endl;
    
    while (file1 >> nbr) {
        if (nbr > ave) {
            cout << nbr << endl;
            file2 << nbr << endl;
        }
    }

    file1.close();
    file2.close();
    
    
    cout << "\n\ndone\n\n\n\n";
    return 0;
}


//
//  main.cpp
//  Program 15
//
//  Created by Matthew Cheng 2015 on 7/14/14.
//  Copyright (c) 2014 Matthew Cheng 2015. All rights reserved.
//

//precompiler directives:
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>

void getData (double &length, double &width, double &price);

double convert (double feet);

double area (double length, double width);

double pricePerSqYard (double size, double cost);

double totalPricePerSquareYard (double pricePerSquareYard);

double leTotal (double area, double pricePerSquareYardFinal);

void printResults (double length, double width, double area, double pricePerSqYard, double padPrice, double installPrice, double totalPerYard, double total);

const double padprice = 2.95;

using namespace std;

int main(  )
{
    double length, length1, width, width1, price, theArea, pricePad, installPrice, totalPricePerSquYard, Total;
    
    pricePad = 2.95;
    installPrice = 0.95;
    
    getData(length, width, price);
    
    length1 = convert(length);
    width1 = convert(width);
    
    theArea = area(length1, width1);
    
    totalPricePerSquYard = totalPricePerSquareYard(price);
    
    Total = leTotal(theArea, totalPricePerSquYard);
    
    printResults(length, width, theArea, price, pricePad, installPrice, totalPricePerSquYard, Total);
    
    cout << "\n\ndone\n\n\n\n";
    return 0;
}

void getData (double &length, double &width, double &price)
{
    cout << "Please enter the length. ";
    cin >> length;
    cout << "Please enter the width. ";
    cin >> width;
    cout << "Please enter the price. ";
    cin >> price;
}

double convert (double feet)
{
    return feet / 3.;
}

double area (double length, double width)
{
    return length * width;
}

double totalPricePerSquareYard (double pricePerSquareYard)
{
    return 2.95 + .95 + pricePerSquareYard;
}

double leTotal (double area, double pricePerSquareYardFinal)
{
    return area * pricePerSquareYardFinal;
}

void printResults (double length, double width, double area, double price, double padPrice, double installPrice, double totalPerYard, double total)
{
    cout << setiosflags(ios::fixed|ios::left) << setprecision(2);
    
    cout << setw (50) << "\n\nRoom Dimensions" << length << " x " << width << endl;
    cout << setw (49) << "\nCarpet Required" << area << " square yards" << endl;
    cout << setw (49) << "\nCarpet Price per Square Yard" << "$" << price << endl;
    cout << setw (49) << "\nPadprice per square yard" << "$" << padPrice << endl;
    cout << setw (49) << "\nInstallation Price per Square Yard" << "$" << installPrice << endl;
    cout << setw (49) << "\nTotal price per Square Yard" << "$" << totalPerYard << endl;
    cout << setw (49) << "\nTotal Price" << "$" << total << endl;
}




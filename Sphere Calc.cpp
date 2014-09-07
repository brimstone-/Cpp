//
//  main.cpp
//  Test 1
//
//  Created by Matthew Cheng 7/7/2014
//  
//

//precompiler directives:
#include <iostream>;
#include <iomanip>;
#include <fstream>;
#include <cmath>;

using namespace std;

int main()
{

	//*******Constants*******
	const double pi = 3.14159;
	
	//Test 1
	double r, v, goodbye;
	cout<< "Please input the radius of the sphere:" <<endl;
	cin>>r;
	v=(double)4/3*pi*r*r*r;
	cout<< "Volume = " <<v<< " units cubed." <<endl;
	cout<< "\n\ndone\n" <<endl;
	cout<< "\n\n\nType any message to say goodbye." <<endl;
	cin>>goodbye;
	
	return 0;
	
}


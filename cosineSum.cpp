// cosineSum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //Defining the angles
    double ANGLEA;
    double ANGLEB;

    //Prompting the user to input the degree of the angles
    cout << "What is the degree of angle A?" << endl;
    cin >> ANGLEA;
    cout << "What is the degree of angle B?" << endl;
    cin >> ANGLEB;

    //Converting degrees to radians
    const double PI = 3.141592653589793238462643383279502884197169399375105820974944; //For accuracy purposes, Pi has been defined to a high number of digits
    double ANGLEA_IN_RADIANS = (PI * ANGLEA) / 180;
    double ANGLEB_IN_RADIANS = (PI * ANGLEB) / 180;

    //Verifying the trigonometric identity
    cout << "The left-hand-side of the trig identity evaluates to " << sin(ANGLEA_IN_RADIANS + ANGLEB_IN_RADIANS) << "." << endl;
    cout << "The right-hand-side of the trig identity evaluates to " << sin(ANGLEA_IN_RADIANS) * cos(ANGLEB_IN_RADIANS) + sin(ANGLEB_IN_RADIANS) * cos(ANGLEA_IN_RADIANS) << "." << endl;

    /*
    PIC 10A
    Homework 2
    Problem 1: cosineSum
    Purpose: Converts user-inputted angles from degrees to radians and verifies a trigonometric identity.
    Author: Amaan Hassanali
    Date: 01/20/2020
    */

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

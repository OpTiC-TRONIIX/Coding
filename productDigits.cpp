// productDigits.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    //Defining the integer to be inputted
    string INTEGER_STRING;

    //Prompting user to input integer
    cout << "Input an integer (100 - 999):" << endl;
    cin >> INTEGER_STRING;

    //Extracting each digit as a substring
    string INTEGER_STRING_SUB1 = INTEGER_STRING.substr(0, 1); //Extracting the first digit
    string INTEGER_STRING_SUB2 = INTEGER_STRING.substr(1, 1); //Extracting the second digit
    string INTEGER_STRING_SUB3 = INTEGER_STRING.substr(2, 1); //Extracting the third digit

    //Converting the substrings to integers
    int INTEGER_DIG1 = stoi(INTEGER_STRING_SUB1);
    int INTEGER_DIG2 = stoi(INTEGER_STRING_SUB2);
    int INTEGER_DIG3 = stoi(INTEGER_STRING_SUB3);

    //Finding the sum of the three digits
    cout << "The Sum of digits is " << INTEGER_DIG1 + INTEGER_DIG2 + INTEGER_DIG3 << "." << endl;
    
    /*
    PIC 10A
    Homework 2
    Problem 2: productDigits
    Purpose: Finds the sum of the 3 digits of a number entered by the user.
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

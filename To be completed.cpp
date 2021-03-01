// hw5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

//THE FUNCTIONS
void displaymenu() {
    cout << "----------- MENU -----------" << endl;
    cout << "1. Output the largest" << endl;
    cout << "2. Get the next permutation" << endl;
    cout << "3. Sort in ascending order" << endl;
}
int largest(int a, int b, int c) {
    if (a > b && a > c) {
        return a;
    }
    else if (b > a && b > c) {
        return b;
    }
    else if (c > a && c > b) {
        return c;
    }
}
void mypermutation(int& a, int& b, int& c) {
    int temp = a;
    a = c;
    c = b;
    b = temp;
}
void mysort(int& a, int& b, int& c) {
    if (a > b && b > c) { 
        int temp = a;
        a = c;
        c = temp;
    }
    else if (a > c && c > b) {
        int temp = a;
        a = b;
        b = c;
        c = temp;
    }
    else if (b > a && a > c) {
        int temp = a;
        a = c;
        c = b;
        b = temp;
    }
    else if (b > c && c > a) {
        int temp = b;
        b = c;
        c = temp;
    }
    else if (c > a && a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    else if (c > b && b > a) {
        a;
        b;
        c;
    }
}

//THE MAIN FUNCTION
int main()
{
    int INTEGER1;
    int INTEGER2;
    int INTEGER3;
    cout << "Enter your three integer numbers: " << endl;
    cin >> INTEGER1 >> INTEGER2 >> INTEGER3;
    while (cin) {
        int CHOICE;
        displaymenu();
        cout << "Enter your choice (1-3), Q to quit: ";
        cin >> CHOICE;
        if (CHOICE == 1) {
            cout << "The largest number among the three is: " << largest(INTEGER1, INTEGER2, INTEGER3) << endl;
            continue;
        }
        else if (CHOICE == 2) {
            mypermutation(INTEGER1, INTEGER2, INTEGER3);
            cout << "After one permutation: " << INTEGER1 << " " << INTEGER2 << " " << INTEGER3 << endl;
            continue;
        }
        else if (CHOICE == 3) {
            mysort(INTEGER1, INTEGER2, INTEGER3);
            cout << "After sorting: " << INTEGER1 << " " << INTEGER2 << " " << INTEGER3 << endl;
            continue;
        }
        else if (cin) {
            break;
        }
    }

    /*
PIC 10A
Homework 5: hw5.cpp
Purpose: The program uses 4 functions in order to allow user input of 3 integers.
         Once inputted, the program allows the user to choose from 3 options.
         When the user wants to quit, they simply input the letter "Q".
         (Note: As per instructions, the program assumes that all input in valid)
Author: Amaan Hassanali
Date: 02/17/2020
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

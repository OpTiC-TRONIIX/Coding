// randomWalk.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
    int XCOORDINATE = 0;
    int YCOORDINATE = 0;
    int counter = 10000;
    
    srand(time(0));
    for (int i = 0; i < counter; i++) {
        int RANDOMRANGE = (rand() % 3) - 1; //FINDING A RANDOM NUMBER IN THE RANGE (-1, 1)
        XCOORDINATE += RANDOMRANGE;
        if (RANDOMRANGE == 0) {
            int RANDOMRANGE2 = (rand() % 3) - 1; //FINDING ANOTHER RANDOM NUMBER IN THE RANGE (-1, 1)
            YCOORDINATE += RANDOMRANGE2;
            if (RANDOMRANGE2 == 0)
                continue;
            else if (RANDOMRANGE2 == 1) {
                cout << "Up   " << setw(10) << "(" << XCOORDINATE << ", " << YCOORDINATE << ")" << endl;
            }
            else if (RANDOMRANGE2 == -1) {
                cout << "Down " << setw(10) << "(" << XCOORDINATE << ", " << YCOORDINATE << ")" << endl;
            }
        }
        else if (RANDOMRANGE == 1) {
            cout << "Right" << setw(10) << "(" << XCOORDINATE << ", " << YCOORDINATE << ")" << endl;
        }
        else if (RANDOMRANGE == -1) {
            cout << "Left " << setw(10) << "(" << XCOORDINATE << ", " << YCOORDINATE << ")" << endl;
        }
        if (XCOORDINATE == -5 || XCOORDINATE == 5 || YCOORDINATE == -5 || YCOORDINATE == 5) {
            cout << "Hit the boundary!" << endl;
            break;
        }
        else if (XCOORDINATE == 0 && YCOORDINATE == 0) {
            cout << "Back to the origin!" << endl;
            break;
        }
    }

    /*
 PIC 10A
 Homework 4
 Problem 2: randomWalk
 Purpose: It prints the position of a robot that randomly moves from the origin (in steps of one) within a [-5,5] x [-5,5] grid.
          If the robot reaches the boundary of the grid, it prints "Hit the boundary!" and ends the program whereas, if the robot moves back to it's original position, it prints "Back to the origin!" and ends the program.
 Author: Amaan Hassanali
 Date: 02/11/2020
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

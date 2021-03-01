// monteCarlo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
    int NMAX = pow(10, 6); //NMAX REPRESENTS THE MAXIMUM NUMBER OF DARTS IN THIS EXPERIMENT
    const double PI = 3.141592653589793238462643383279502884197169399375105820974944; //I DEFINED PI IN ORDER TO GET A MORE ACCURATE VALUE OF THE ELLIPSE AREA
    const double ELLIPSEAREA = PI / sqrt(2);
    string ESTIMATEDAREA = "       estimated area = ";

    for (int N = 1; N < NMAX; N *= 10) { 
        srand(time(0));
        int RANDOMNUMBERINELLIPSE = rand() % ((N * 10) + 1); //FINDING A RANDOM NUMBER
        double ESTIMATEDELLIPSEAREA = (RANDOMNUMBERINELLIPSE / (N*10.0)) * 4; //ESTIMATING THE AREA OF THE ELLIPSE (NOTE THAT "N*10" ARE THE NUMBER OF DARTS IN THE SQUARE AND 4 IS THE AREA OF THE SQUARE)
        double ERROR = ESTIMATEDELLIPSEAREA - ELLIPSEAREA;
        double ABSOLUTEERROR = fabs(ERROR);
        cout << fixed << setprecision(5); //THE PRECISION HAS BEEN SET TO 5.D.P.
        cout << "# darts: " << N*10 << setw(13) << ESTIMATEDAREA << ESTIMATEDELLIPSEAREA << setw(13) << "error = " << ABSOLUTEERROR << endl;
        ESTIMATEDAREA =  ESTIMATEDAREA.substr(1); //TO MAKE SURE THAT THE VALUES ARE DISPLAYED APPROPRIATELY
      
    }

    /*
  PIC 10A
  Homework 4
  Problem 1: monteCarlo
  Purpose: It estimates the area of an ellipse within a square using the Monte Carlo method and finds the error between this estimate and the actual area
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

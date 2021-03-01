// gradeCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    //DEFINING INTEGERS AND FLOAT NUMBERS
    double MIDTERMSCORE;
    double FINALEXAMSCORE;
    int N; //LET "N" BE THE NUMBER OF HOMEWORK ASSIGNMENTS
    int HOMEWORKCOUNT = 0;
    double HOMEWORKSCORE;
    double HOMEWORKLOWEST = 100;
    double HOMEWORKSUM = 0;

    //FINDING OUT MIDTERM SCORE, FINAL SCORE AND NUMBER OF HOMEWORKS
    cout << "Please enter the midterm score (0 - 100): ";
    cin >> MIDTERMSCORE;
    cout << "Please enter the final exam score (0 - 100): ";
    cin >> FINALEXAMSCORE;
    cout << "Please enter the number of homework assignments (3 - 10): ";
    cin >> N;

    //AN IF STATEMENT TO MAKE SURE THE INPUT FOR "N" IS CORRECT
    if (N >= 3 && N <= 10) {
        //FINDING THE HOMEWORK GRADES (AND AVERAGE)
        while (HOMEWORKCOUNT < N) {
            HOMEWORKCOUNT = ++HOMEWORKCOUNT;
            cout << "Please enter the homework " << HOMEWORKCOUNT << " score (0 - 100): ";
            cin >> HOMEWORKSCORE;
            if (HOMEWORKLOWEST > HOMEWORKSCORE) {
                HOMEWORKLOWEST = HOMEWORKSCORE;
            }
            HOMEWORKSUM = HOMEWORKSUM + HOMEWORKSCORE;
        }
        double HOMEWORKAVERAGE = (HOMEWORKSUM - HOMEWORKLOWEST) / (N-1);

        //CALCULATING AND OUTPUTTING FINAL SCORES
        double FINALSCORESCHEMEA = (0.3 * MIDTERMSCORE) + (0.4 * FINALEXAMSCORE) + (0.3 * HOMEWORKAVERAGE);
        double FINALSCORESCHEMEB = (0.7 * FINALEXAMSCORE) + (0.3 * HOMEWORKAVERAGE);

        cout << "Your final score based on Scheme A is " << FINALSCORESCHEMEA << endl;
        cout << "Your final score based on Scheme B is " << FINALSCORESCHEMEB << endl;

        double FINALSCORE = max(FINALSCORESCHEMEA, FINALSCORESCHEMEB);

        cout << "Your final score is " << FINALSCORE << endl;

        //OUTPUTTING COURSE GRADE
        if (FINALSCORE >= 90 && FINALSCORE <= 100) {
            cout << "Your course grade is A";
        }
        else if (FINALSCORE >= 80 && FINALSCORE < 90) {
            cout << "Your course grade is B";
        }
        else if (FINALSCORE >= 70 && FINALSCORE < 80) {
            cout << "Your course grade is C";
        }
        else if (FINALSCORE >= 60 && FINALSCORE < 70) {
            cout << "Your course grade is D";
        }
        else {
            cout << "Your course grade is F";
        }
    }
    else {
        cout << "Your input for number of homework assignments was incorrect. Kindly restart the program and input the information correctly." << endl;
    }

    /*
    PIC 10A
    Homework 3
    Problem 2: gradeCalculator
    Purpose: It determines scores and a final course grade based on user input about their homework assignments, midterm and final exam.
    Author: Amaan Hassanali
    Date: 01/29/2020
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

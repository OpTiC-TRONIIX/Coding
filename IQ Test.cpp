// IQ Test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <time.h>

using namespace std;

int main()
{
    cout << "WELCOME TO AMAAN'S IQ TEST!\n" << endl;
    //Instructions
    cout << "A few things to note: " << endl;
    cout << "- The test will have 10 questions." << endl;
    cout << "- The test will be timed (though the timer will not be displayed). Therefore, attempt to finish each question as fast as possible. " << endl;
    cout << "- You must complete this test in 25 minutes or less." << endl;
    cout << "- The use of electronics including phones, watches and especially calculators is prohibited during this test." << endl;
    cout << "Let's begin!" << endl;

    cout << "Press any key to continue" << endl;
    cin.ignore();
    
    //Timer
    unsigned int start = clock();

    //Test Begins
    double A1;
    double A2;
    double A3;
    double A4;
    double A5;
    double A6;
    double A7;
    double A8;
    double A9;
    double A10;
    int COUNT = 0;

    cout << "1. Calculate: (((25 x 25)^3/2)/5) - K where K is y-coordinate of the solution to the following system of equations: x - 2y + 3z = -11, 3y + x + 2z = 17, z - x - 5y = -1" << endl;
    cin >> A1;
    cout << "2. What is the next number in the following sequence/series: 2, 7, 57, ___, 10939557" << endl;
    cin >> A2;
    cout << "3. If pi = 3.142, what is (pi/3) + pi^2 to the same number of decimal places?" << endl;
    cin >> A3;
    cout << "4. Let infinity be represented by \"i\". Calculate the value of x in the following equation: x = (((234 * 54)/12)^1/2)/i"<< endl;
    cin >> A4;
    cout << "5. Let X, Y and Z be three prime numbers. If the sum of X, Y and Z is 65, the product of X and Y is 341 and the difference between Y and Z is 8. What is the product of (X+9), (Y-1) and (Z-3)? " << endl;
    cin >> A5;
    cout << "6. What number, when squared, is equal to the cube root of i^4 - (A + B) where B < A, and A and B are the solutions to the following equation: x^2 + 63x - 130 = 0" << endl;
    cin >> A6;
    cout << "7. At a local hardware vendor's shop, a hard disk costs $10 and a flash disk costs $2. A hardware vendor wants to make a high profit and has two choices:" << endl;
    cout << "Choice 1 - An 80% increase in the price of the flash disk and a 20% increase in the price of a hard disk" << endl;
    cout << "Choice 2 - A 30% increase in the price of a hard disk and a 70% increase in the price of a flash disk" << endl;
    cout << "Which choice results in higher profit for the vendor (ceteris paribus)?" << endl;
    cout << "Just put in the number of the answer you choose (for example: 1)" << endl;
    cin >> A7;
    cout << "8. If Cameron has an IQ of 115 while Mary has an IQ of 107, does the acrostic (a message hidden within a patterned set of letters of a word of phrase) below provide the difference between their respective IQs? " << endl;
    cout << " Eleven times Eighteen Greater Ninety" << endl;
    cout << "Just put in the either 1 for True or 2 for False (for example: 2)" << endl;
    cin >> A8;
    cout << "9. Which of the following sets of words have a similar meaning (in certain contexts) to that of the words perspicacious and malady respectively? (Note: word types such as adverbs, adjectives etc, are insignificant in this question)" << endl;
    cout << "1) Clean, inordinate" << endl;
    cout << "2) Absurd, Meagre" << endl;
    cout << "3) Intuitive, Morbid" << endl;
    cout << "4) Inspired, Astute " << endl;
    cout << "Just put in the number of the answer you choose (for example: 4)" << endl;
    cin >> A9;
    cout << "10. What is the next number in the following sequence/series:  69, 89, __, 99" << endl;
    cin >> A10;

    //Time check
    cout << "Time taken in millisecs: " << clock() - start <<endl;
    cin.ignore();
    cout << "Press any key to continue" << endl;
    cin.ignore();

    //COUNT
    if (A1 == 3121)
    {
        COUNT = COUNT + 1;
    }
    if (A2 == 3307)
    {
        COUNT = COUNT + 1;
    }
    if (A3 == 10.919)
    {
        COUNT = COUNT + 1;
    }
    if (A4 == 0)
    {
        COUNT = COUNT + 1;
    }
    if (A5 == 12000)
    {
        COUNT = COUNT + 1;
    }
    if (A6 == 2)
    {
        COUNT = COUNT + 1;
    }
    if (A7 == 2)
    {
        COUNT = COUNT + 1;
    }
    if (A8 == 2)
    {
        COUNT = COUNT + 1;
    }
    if (A9 == 3)
    {
        COUNT = COUNT + 1;
    }
    if (A10 == 67) 
    {
        COUNT = COUNT + 1;
    }

    cout << "You got " << COUNT << " answers correct" << endl;

    //Converting time into minutes
    int TIMEINMIN = (clock() - start) / 60000;
    cout << "Time taken in minutes: " << TIMEINMIN << endl;

    //Calculating IQ
    int IQTOTAL = COUNT * COUNT;
    if (TIMEINMIN < 2) {
        cout << "STOP BS-ING THE TEST/CHEATING" << endl;
    }
    else if (TIMEINMIN < 26) {
        int IQ = (IQTOTAL + ((COUNT * 100) / TIMEINMIN));
        cout << "Your IQ range is: " << IQ << endl;

        if (IQ < 100) {
            cout << "Oh my :( Better get to the books quick..." << endl;
        }
        else if (IQ < 120) {
            cout << "You have an average intellect. Sorry. Who knows? Maybe a high EQ can compensate for it..." << endl;
        }
        else if (IQ < 150) {
            cout << "Wow! You're pretty much a genius (kind of like me)! Kudos!" << endl;
        }
        else if (IQ > 150) {
            cout << "OK. You are at the top of the top! Must feel proud being a know-it-all, huh? Still, kudos!" << endl;
        }
    }
    else {
        cout << "You took too long. Sorry :(" << endl;
    }
    
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

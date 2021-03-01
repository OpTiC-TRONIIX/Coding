// MontyHall.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int MyFunction() {
    srand(time(0));
    int Goat1 = 1 + rand() % (3);
    int Goat2 = 1 + rand() % (3);
    int Automobile = 1 + rand() % (3);
    int door;
    bool switched = 0;
    bool didyouwin = 0;

    while (Goat1 == Goat2) {
        Goat2 = 1 + rand() % (3);
    }
    while (Automobile == Goat1 || Automobile == Goat2) {
        Automobile = 1 + rand() % (3);
    }
   
    cout << "Choose a door (Enter 1, 2 or 3)" << endl;
    door = 1 + rand() % (3);
    cout << "You chose door: " << door << endl;
    int randdoor = 1 + rand() % (3);
    while (randdoor == door) {
        randdoor = 1 + rand() % (3);
    }
    cout << "I show this door: " << randdoor << endl;
    if (randdoor == Automobile) {
        cout << "You lose!" << endl;
        didyouwin = 0;
    }
    else {
        cout << "Do you want to switch your choice? (1 for yes, 0 for no)" << endl;
        switched = rand() % (2);
        if (switched == 1) {
            cout << "You switched" << endl;
        }
        else {
            cout << "You didn't switch" << endl;
        }
        cout << "Let's see what's behind the remaining door (the door you haven't chosen): " << endl;
        int randdoor2 = 1 + rand() % (3);
        while (randdoor2 == randdoor || randdoor2 == door) {
            randdoor2 = 1 + rand() % (3);
        }
        cout << "It's door: " << randdoor2 << endl;
        if (randdoor2 == Automobile) {
            cout << "You lose!" << endl;
            didyouwin = 0;
        }
        else {
            cout << "You win!" << endl;
            didyouwin = 1;
        }   
    }
    if (switched == 1 && didyouwin == 1) {
        return 1;
    }
    else if (switched == 0 && didyouwin == 1) {
        return 0;
    }
}

int main()
{
    double switchcounter = 0;
    for (int i = 0; i < 10; i++) {
        int x = MyFunction();
        if (x == 1) {
            switchcounter++;
        }
    }
    cout << "You switched and won this many times: " << switchcounter;
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

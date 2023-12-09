// Main.cpp: This file contains the 'main' function. Program execution begins and ends here.
#include <iostream>
#include <fstream>
#include <array>
#include <string>
#include <cmath>
#include <stdexcept>
#include "Func.h" // Include the header file for DS_1.cpp
#include <string>
 //
using namespace std;

int main() {

    //feed in the array size and then the function creates the array 

    int s = 100;
    int* arrayy = new int[s];

    string name;
    cout << "Enter in the name of the file you would like to read that has 100 integers in total" << endl;
    cin >> name;

    readingFile(name, s, arrayy);

    //eventually modify this code
    char choice = 'C';
    char userChoice = 'C';


    while (choice != 'X' && choice != 'x') {
        showMenu();
        cin >> choice;
        char userChoice = toupper(choice);

        switch (userChoice) {
        case 'R':
            replaceValue(arrayy);
            //call

            break;
        case 'F':
            find(arrayy);

            break;
        case 'M':
            char input;
            int indexx;

            cout << "Do you know the index of the value you are looking for? y/n";
            cin >> input;

            if (toupper(input) == 'Y') {
                cin >> indexx;
                modifyInteger(arrayy, indexx);
            }
            // else if (toupper(input) == 'N') {
            //     modifyInteger(arrayy);
            // }
            break;
        case 'A':
            addToArray(arrayy);

            break;

        }

    }


    return 0;
}
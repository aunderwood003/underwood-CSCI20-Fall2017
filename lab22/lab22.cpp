// Created by Alex U.
// Created on 9-21-17
#include <iostream>
#include <cstdlib>     // including required libraries
using namespace std;

int main() {
    int ranNum = 0; // Defining the function
    
    srand(time(0)); // Seed in time
    ranNum = (rand() % 100) + 1; // Random Number between 1 - 100
    
    cout << "Your random number is: " << ranNum << "." << endl; // Random number output
    
    return 0;
}

// Output #1: Your random number is: 84. Process exited with code: 0
// Output #2: Your random number is: 56. Process exited with code: 0
// Output #3: Your random number is: 60. Process exited with code: 0
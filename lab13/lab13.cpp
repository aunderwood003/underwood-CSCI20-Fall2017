// Made by Alex U. on 8-31-17
#include <iostream>
using namespace std;

int main() {
    int numPopulation = 325779000; //current population
    int numSecondsInYear = 31536000; // seconds in a year
    int numYears = 8; // projected population
    cout << "The population of the United Staes in 2025 will be ";
    cout << numPopulation + (numSecondsInYear / 12) * numYears;
    cout << endl;
    
    return 0;
}
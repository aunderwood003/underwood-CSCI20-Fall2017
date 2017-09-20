// Created by: Alex Underwood
// Created on: 9-19-17

#include <iostream>
#include <cmath>
using namespace std;

struct Windchill {
    double tempF;
    int numVelocity;
    double oldFormula;
    double newFormula;
    double formDifference;
    
};

int main(){
    
    Windchill statA;
    statA.tempF = 30;
    statA.numVelocity = 4;
    
    Windchill statB;
    statB.tempF = 39.25;
    statB.numVelocity = 10;
    
    Windchill statC;
    statC.tempF = 100;
    statC.numVelocity = 2;
    
    statA.oldFormula = 0.081 * (3.71 * sqrt(statA.numVelocity) + 5.81 - 0.25 * statA.numVelocity) * (statA.tempF - 91.14) + 91.14;
    statA.newFormula = 35.74 + 0.6215 * statA.tempF - 35.75 * pow(statA.numVelocity, 0.16) + 0.4275 * statA.tempF;
    statA.formDifference = statA.oldFormula - statA.newFormula;
    
    statB.oldFormula =  0.081 * (3.71 * sqrt(statB.numVelocity) + 5.81 - 0.25 * statB.numVelocity) * (statB.tempF - 91.14) + 91.14;
    statB.newFormula = 35.74 + 0.6215 * statB.tempF - 35.75 * pow(statB.numVelocity, 0.16) + 0.4275 * statB.tempF;
    statB.formDifference = statB.oldFormula - statB.newFormula;

    
    statC.oldFormula = 0.081 * (3.71 * sqrt(statC.numVelocity) + 5.81 - 0.25 * statC.numVelocity) * (statC.tempF - 91.14) + 91.14;
    statC.newFormula = 35.74 + 0.6215 * statC.tempF - 35.75 * pow(statC.numVelocity, 0.16) + 0.4275 * statC.tempF;
    statC.formDifference = statC.oldFormula - statC.newFormula; 
    
    cout << "|  TEMP  |  WIND SPEED  |  OLD FORMULA  |  NEW FROMULA  |  DIFFERENCE  |" << endl;
    cout << "|________|______________|_______________|_______________|______________|" << endl;
    cout << "|  " << statA.tempF << "    |     " << statA.numVelocity << "        |  " << statA.oldFormula << "      |  " << statA.newFormula << "      |  " << statA.formDifference << "      |  " << endl;
    cout << "|  " << statB.tempF << " |    " << statB.numVelocity << "        |  " << statB.oldFormula << "      |  " << statB.newFormula << "      |  " << statB.formDifference << "     |  " << endl;
    cout << "|  " << statC.tempF << "   |     " << statC.numVelocity << "        |  " << statC.oldFormula << "      |  " << statC.newFormula << "      |  " << statC.formDifference << "    |  " << endl;
    
    
    
    
}

#include <iostream>
#include <string>
using namespace std;

struct Yogurt {
   int numOz;
   int numTop;
   double yogurtOz;
   double yogurtTop;
   double yogurtTax;
   double yogurtTip;
   double yogurtCoup;
   double grossCost;
   double totalCost;
};

int main(){
    
    Yogurt customerA;
    customerA.numOz = 4;
    customerA.numTop = 1;
    customerA.yogurtCoup = 0.15;
    customerA.yogurtTip = 0.25;
    
    Yogurt customerB;
    customerB.numOz = 16;
    customerB.numTop = 7;
    customerB.yogurtCoup = 0.0;
    customerB.yogurtTip = 0.0;
    
    Yogurt customerC;
    customerC.numOz = 32;
    customerC.numTop = 4;
    customerC.yogurtCoup = 0.25;
    customerC.yogurtTip = 0.5;
    
    Yogurt customerD;
    customerD.numOz = 14;
    customerD.numTop = 10;
    customerD.yogurtCoup = 0.5;
    customerD.yogurtTip = 1.0;

customerA.grossCost = (customerA.numOz * 0.17) + (customerB.numTop * 0.5) * (1.0 - customerA.yogurtCoup);
customerA.totalCost = (customerA.grossCost + customerA.yogurtTip);

cout << "Your total cost is: " << customerA.totalCost << endl;

customerB.grossCost = (customerB.numOz * 0.17) + (customerB.numTop * 0.5) * (1.00 - customerB.yogurtCoup);
customerB.totalCost = (customerB.grossCost + customerB.yogurtTip);

cout << "Your total cost is: " << customerB.totalCost << endl;

customerC.grossCost = (customerC.numOz * 0.17) + (customerC.numTop * 0.5) * (1.00 - customerC.yogurtCoup);
customerC.totalCost = (customerC.grossCost + customerC.yogurtTip);

cout << "Your total cost is: " << customerC.totalCost << endl;

customerD.grossCost = (customerD.numOz * 0.17) + (customerD.numTop * 0.5) * (1.00 - customerD.yogurtCoup);
customerD.totalCost = (customerD.grossCost + customerD.yogurtTip);

cout << "Your total cost is: " << customerD.totalCost << endl;

}
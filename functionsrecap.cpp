// functionsrecap.cpp : recapping on functions  for return value, parameter values
//

#include <iostream>
using namespace std;
double x, y;

void printFive() {
    cout << "5" << endl;
    
}

int printSix() {
    return 6;
}

void printInt(int x) {
    cout << x << endl;
}

void peopleRand (string name, int x) {
    cout << "Name: " << name << ", Age: " << x << endl;
}

double Moneybank(double y, double x) {
    return (x - y);
}

int main()
{
   cout << "Hello World!\n";
   printFive();
   cout << printSix()<<endl;
   printInt(7);
   peopleRand("Kentaro", 27);
   cout << "Enter how much money in wallet\n";
   cin >> x;
   cout << "Enter how much money to give away\n";
   cin >> y;
   cout << "\nYou would have " << Moneybank(x, y) << " left.";
   
}


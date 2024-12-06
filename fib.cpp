//Write a recursive function that finds the #n integer of the Fibonacci sequence. Then build a minimal program to test it.

#include <iostream>
using namespace std;


int fib (int n) {
    if (n <= 1) {
        return n;  
    }
    return fib(n - 1) + fib(n - 2);  // Recursive case meant for Fibonacci,i think - its a work in progress
}

int main() {
    int x;

    cout << "Enter a number to find its Fibonacci value: ";
    cin >> x;

    int output = fib(x);

    cout << "Fibonacci number at position " << x << " is: " << output << endl;

    return 0;
}


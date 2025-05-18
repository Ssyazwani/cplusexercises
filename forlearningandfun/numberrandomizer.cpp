#include <iostream>
#include <random>
using namespace std;

int main() {

    random_device rd;
    mt19937 gen(rd());
    char x;

    uniform_int_distribution<int> dist(1, 100);
    int random_number;

    cout << "Input Y for random number, X to quit\n";
    cin >> x;

    while (true) {
        switch (x) {
        case 'Y':
        case 'y':
            random_number = dist(gen); 
            cout << "\nRandom number generated for you: " << random_number << endl;
            break;
        case 'x':
        case 'X':
            cout << "\nExiting program";
            return 0;
        default:
            cout << "\n Invalid input. Please input Y for random number\n";
            break;
        }

        cout << "Input Y for random number, X to quit\n";
        cin >> x;
    }

    return 0;
}
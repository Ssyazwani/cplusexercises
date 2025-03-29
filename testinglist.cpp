
#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {

    cout << "The list of actors recorded:\n";
    list<string> actors = { "Takumi Kitamura", "Mio Imada", "Ren Meguro", "Nagano Mei" };


    for (const string& jactors : actors) {
        cout << jactors << "\n";
    }


    cout << "To add one more actor, please press 1: ";

    int x;
    cin >> x;
    cin.ignore();
    string y;

    switch (x) {
    case 1:
        cout << "\nKey in the name of the actor: ";
        getline(cin, y);  

        actors.push_back(y);  

      
        cout << "\nThe list of actors recorded:\n";
        for (const string& jactors1 : actors) {
            cout << jactors1 << "\n";
        }
        break;

    default:
        cout << "Invalid option selected.\n";
        break;
    }

    return 0;
}


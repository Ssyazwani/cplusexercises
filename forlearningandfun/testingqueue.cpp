#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<string> membersofArashi;
    string x;

    membersofArashi.push("Sho");
    membersofArashi.push("Nino");
    membersofArashi.push("Jun");
    membersofArashi.push("Aiba");

    cout << "Total size : " << membersofArashi.size() << endl;

    cout << "Members : ";
    while (!membersofArashi.empty()) {
        cout << membersofArashi.front() << " ";
        membersofArashi.pop();
    }
    cout << endl;

    cout << "Add another member: ";
    cin >> x;
    membersofArashi.push(x);

    cout << "Updated members of Arashi: ";
    while (!membersofArashi.empty()) {
        cout << membersofArashi.front() << " ";
        membersofArashi.pop();
    }
    cout << endl;

    return 0;
}



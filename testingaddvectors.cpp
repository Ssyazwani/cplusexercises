#include <iostream>
#include <vector>
using namespace std;

int main()
{

        vector<int> num{ 1, 2, 3, 4, 5 };
        int x,y;

        cout << "Initial Vector: ";

        for (const int& i : num) {
            cout << i << "  ";
        }

        cout << "\nPlease add in your first number :\n";

        cin >> x;
        num.push_back(x);

        cout << "\nPlease add in your second number :\n";

        cin >> y;

        num.push_back(y);

        cout << "\nUpdated Vector: ";

        for (const int& i : num) {
            cout << i << "  ";
        }

        return 0;
 }

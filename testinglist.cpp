#include <iostream>
#include <list>
using namespace std;

int x;
string y;

int main()
{
	cout << " The list of jactors recorded :\n";
	list<string> actors = { "Takumi Kitamura", "Mio Imada", "Ren Meguro", "Nagano Mei" };

	
	for (string jactors : actors) {
		cout << jactors << "\n";
	}

	cout << "To add in one more actor, please press 1:";

	cin >> x;


	switch (x)

		case 1: 
			cout << "\n Key in name of actor : ";
			cin >> y;
			actors.push_back(y);

			cout << "\n The list of jators recorded :";

	

			for (string jactors1 : actors){
				cout << jactors1 << "\n";
			}




}

#include <iostream>
#include <map>
using namespace std;

int main()
{
	map<string, int> actors = { {"Mackenyu", 28}, {"Kentaro", 33}, {"Takahashi", 24} };

	cout << "Takahashi is: " << actors["Takahashi"] << "\n";

	cout << "Mackenyu is: " << actors ["Mackenyu"] << "\n";
}

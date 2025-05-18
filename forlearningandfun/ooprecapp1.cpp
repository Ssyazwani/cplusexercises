
#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
public:                       //Access modifier
	string name;              //member of the class
	int balance;

	void withdraw(int amount)
	{
		balance = balance - amount;
	}

	void set_salary(double potential_salary) {
		if (potential_salary < 0)
			salary = 0;
		else salary = potential_salary;
	}

	double get_salary() {
		return salary;
	}

	void print_bonus() {

		cout << name << "'s bonus: " << calculate_bonus() << endl;
	}

private:                                 // Access modifier
	double salary;

	double calculate_bonus() {
		return salary * 0.10;
	}

	
};

int main()
{
	BankAccount account1;
	account1.name = "Shigeoka";
	account1.balance = 3000;

	cout << account1.name << " has " << account1.balance << " dollars" << endl;

	BankAccount account2;
	account2.name = "Hokuto";
	account2.balance = 1000;

	cout << account2.name << " has " << account2.balance << " dollars" << endl;

	account2.withdraw(100);

	cout << account2.name << " has " << account2.balance << " dollars" << endl;

	account1.set_salary(5000);

	cout << account1.name << " earns "  << account1.get_salary() << " dollars. " << endl;
	
	account1.print_bonus();
	
}


# include <iostream>
using namespace std;

int main() {

  char input;
  float num1, num2;

  cout << "Enter operator: +, -, *, /: ";
  cin >> input;

  cout << "Enter two operands: ";
  cin >> num1 >> num2;

  switch(input) {

    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;

    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;

    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;

    case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;

    default:
      
      cout << "Invalid Input";
      break;
  }

  return 0;
}
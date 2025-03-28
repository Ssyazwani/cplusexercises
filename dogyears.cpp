// Learn C++
// Dog Years

#include <iostream>
using namespace std;

int main()
{

  int dog_age = 3;

  int young, old, human_years;

  young = 21;

  old = (dog_age - 2) * 4;

  human_years = young + old;

  cout << "My name is Dog!  I am " << human_years << " years old in human years. Woof!\n";

}
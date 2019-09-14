// This program calculates a person's height in feet (') and inches (").

#include <iostream>

int main()
{

  //We will get the person's height in inches to feet.

  int height_in_inches;

  std::cout << "Please enter the person\'s hieght in inches:";

  //Getting the height of the person in inches.

  std::cin >> height_in_inches;

  int feet = height_in_inches / 12;
  int inches = height_in_inches % 12;

  // We get our final result.

  std::cout << "Your height in feet is " << feet << "\'" << inches << "\".\n";

  return 0;

}

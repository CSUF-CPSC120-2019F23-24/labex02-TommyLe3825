// Name: Tommy Le
// This program calculates the tax and tip on a restaurant bill.

#include <iostream>

int main()
{
  double mealcost,tax,tip,totalbill;

  std::cout << "Welcome to the Restaurant Bill Calculator!\n";
  std::cout << "What is the total meal cost? ";
  std::cin >> mealcost;

  tax= mealcost * 0.0775;
  std::cout << "Tax:        $" << tax << "\n";

  tip= mealcost * 0.20;
  std::cout << "Tip:        $" << tip << "\n";

  totalbill=tip+tax+mealcost;
  std::cout << "Total Bill: $" << totalbill;
  return 0;
}

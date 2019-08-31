// Name: Tommy Le
// This program calculates the tax and tip on a restaurant bill.

#include <iostream>

int main()
{
  double mealcost,tax,tip,totalbill;
  
  std::cout << "Welcome to the Restaurant Bill Calculator!\n";
  //Input Meal Cost
  std::cout << "What is the total meal cost? ";
  std::cin >> mealcost;
  
  //Calculating Tax
  tax= mealcost * 0.0775;
  std::cout << "Tax:        $" << tax << "\n";
  
  //Calculating Tip
  tip= mealcost * 0.20;
  std::cout << "Tip:        $" << tip << "\n";
  
  //Calculating Total Bill
  totalbill=tip+tax+mealcost;
  std::cout << "Total Bill: $" << totalbill;
  return 0;
}

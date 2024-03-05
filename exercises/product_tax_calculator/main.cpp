#include <iostream>

int main()
{
  double product_value, taxRate;

  std::cout << "Enter product value: ";
  std::cin >> product_value;

  std::cout << "Enter tax rate (%): ";
  std::cin >> taxRate;

  double tax = product_value * taxRate / 100;
  double total = product_value + tax;

  std::cout << "Tax: " << tax << std::endl;
  std::cout << "Total: " << total << std::endl;

  return 0;
}
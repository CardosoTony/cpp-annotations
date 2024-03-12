#include <iostream>
#include <iomanip>

int main()
{
  float product_price;
  float final_price;
  float tax;
  float tax_amount;

  std::cout << "Enter the product price: $";
  std::cin >> product_price;

  if (product_price <= 200)
  {
    tax = 0;
  }
  else if (product_price > 200 && product_price <= 500)
  {
    tax = 5;
  }
  else
  {
    tax = 7.5;
  }

  final_price = product_price + (product_price * tax) / 100;
  tax_amount = product_price * tax / 100;

  std::cout << std::fixed << std::setprecision(2);
  std::cout << "Final price including tax: $" << final_price << std::endl;
  std::cout << "Tax amount: $" << tax_amount << std::endl;

  return 0;
}
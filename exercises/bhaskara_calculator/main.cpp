#include <iostream>
#include <cmath>
#include <cstdlib>

double delta(double a_value, double b_value, double c_value)
{
  double delta_value = std::pow(b_value, 2) - (4 * a_value * c_value);

  std::cout << "Delta value is " << delta_value << std::endl;

  return delta_value;
}

void roots(double delta_value, double a_value, double b_value)
{
  double root1, root2;

  root1 = (-b_value + std::sqrt(delta_value)) / (2 * a_value);
  root2 = (-b_value - std::sqrt(delta_value)) / (2 * a_value);

  std::cout << "The x' are " << root1 << std::endl;
  std::cout << "The x\" are " << root2 << std::endl;
}

int main()
{
  double a_value, b_value, c_value;

  std::cout << "Enter the A value: ";
  std::cin >> a_value;

  std::cout << "Enter the B value: ";
  std::cin >> b_value;

  std::cout << "Enter the C value: ";
  std::cin >> c_value;

  double delta_value = delta(a_value, b_value, c_value);
  roots(delta_value, a_value, b_value);

  system("pause");

  return 0;
}
#include <cmath>
#include <iomanip>
#include <iostream>

int main()
{
  double x, y;
  int z = 2;

  std::cout << "Enter the first number: ";
  std::cin >> x;

  std::cout << "Enter the second number: ";
  std::cin >> y;

  std::cout << std::fixed << std::setprecision(2);

  std::cout << x << " + " << y << " = " << x + y << std::endl;
  std::cout << x << " - " << y << " = " << x - y << std::endl;
  std::cout << x << " * " << y << " = " << x * y << std::endl;
  std::cout << x << " / " << y << " = " << x / y << std::endl;
  std::cout << x << " % " << z << " = " << static_cast<int>(x) % z << std::endl;
  std::cout << x << " ^ " << y << " = " << std::pow(x, y) << std::endl;
  std::cout << "Square root: " << x << " = " << std::sqrt(x) << std::endl;
  std::cout << "Cubic root: " << std::cbrt(x * y) << std::endl;
  std::cout << "Sin: " << x << " = " << std::sin(x) << std::endl;
  std::cout << "Cos: " << x << " = " << std::cos(x) << std::endl;
  std::cout << "Tan: " << x << " = " << std::tan(x) << std::endl;

  return 0;
}
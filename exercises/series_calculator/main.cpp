/*
  Taylor series

  e^x = 1 + x + x²/2! + x³/3! + x^4/4! + ...
*/

#include <iostream>

int main()
{
  double x;
  double e_to_x = 1.0;

  std::cout << "Enter the value of 'x': ";
  std::cin >> x;

  double pow_of_x = x;
  double factorial = 1.0;

  for (int i = 1; i <= 3; i++)
  {
    e_to_x += pow_of_x / factorial;
    pow_of_x *= x;
    factorial *= i + 1;
  }

  std::cout << "The value of e^" << x << " using the series up to tenth element is: " << e_to_x << std::endl;

  return 0;
}

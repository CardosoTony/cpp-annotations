/*
  Taylor series

  e^x = 1 + x + x²/2! + x³/3! + x^4/4! + ...

  sen(x) = x - x³/3! + x^5/5! + x^7/7! + ...
*/

#include <iostream>
#include <cmath>

void exponentialSeries()
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
}

void sineSeries()
{
  double x;
  double sin_to_x = 0.0;

  std::cout << "Enter the value of 'x' (in rads): ";
  std::cin >> x;

  double pow_of_x = x;
  double factorial = 1.0;
  double term = pow_of_x;
  int n = 0;

  while (fabs(term) >= 0.001)
  {
    sin_to_x += term;
    n++;
    factorial *= 2 * n * (2 * n + 1);
    pow_of_x *= std::pow(x, 2);
    term = (pow_of_x / factorial) * ((n % 2 == 0) ? 1 : -1);
  }

  std::cout << "The value of sin(" << x << ") using the Taylor series is: " << sin_to_x << std::endl;
}

int main()
{
  exponentialSeries();
  sineSeries();

  return 0;
}

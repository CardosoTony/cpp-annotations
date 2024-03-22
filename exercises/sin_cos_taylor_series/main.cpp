#include <iostream>
#include <cmath>

int main()
{
  const double STEP_SIZE = 0.1;
  const double END_POINT = 6.3;

  for (double x = 0; x <= END_POINT; x += STEP_SIZE)
  {
    {
      double sin_of_x = x;
      double term = x;
      double pow_of_x = x;
      double factorial = 1;
      int n = 1;

      while (fabs(term) >= 0.001)
      {
        pow_of_x *= x * x; // OR pow_of_x *= pow(x, 2);
        factorial *= (2 * n) * (2 * n + 1);
        term = pow_of_x / factorial;
        term = (n % 2 != 0) ? -term : term;
        sin_of_x += term;
        n++;
      }

      double cos_of_x = 1.0;
      term = 1.0;
      pow_of_x = 1.0;
      factorial = 1.0;
      n = 0;

      while (fabs(term) >= 0.001)
      {
        n++;
        pow_of_x *= x * x; // OR pow_of_x *= pow(x, 2);
        factorial *= (2 * n) * (2 * n - 1);
        term = pow_of_x / factorial;
        term = (n % 2 != 0) ? -term : term;
        cos_of_x += term;
      }

      std::cout << "\nFor x = " << x << ":\nsin(x) = " << sin_of_x << "\ncos(x) = " << cos_of_x << std::endl;
    }
  }
  return 0;
}
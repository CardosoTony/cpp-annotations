#include <iostream>

int main()
{
  // an = a1 + (n -1) * d
  double a1, d;
  int n;

  std::cout << "Enter the first term (a1): ";
  std::cin >> a1;

  std::cout << "Enter the common difference (d): ";
  std::cin >> d;

  std::cout << "Enter the term number (n): ";
  std::cin >> n;

  double an = a1 + (n - 1) * d;

  std::cout << "The " << n << "-th term of the arithmetic progression is: " << an << std::endl;

  for (int i = 1; i <= n; i++)
  {
    an = a1 + (i - 1) * d;
    std::cout << "a" << i << " = " << an << std::endl;
  }

  return 0;
}
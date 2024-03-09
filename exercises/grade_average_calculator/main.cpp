#include <iostream>

int main()
{
  double n1, n2, n3, arithmetic_mean;

  std::cout << "Enter the first grade: ";
  std::cin >> n1;

  std::cout << "Enter the second grade: ";
  std::cin >> n2;

  std::cout << "Enter the third grade: ";
  std::cin >> n3;

  arithmetic_mean = ((n1 * 2) + (n2 * 2) + n3) / 5;

  if (arithmetic_mean >= 6)
  {
    std::cout << "The average is " << arithmetic_mean << " and you passed." << std::endl;
  }
  else
  {
    std::cout << "The average is " << arithmetic_mean << " and you failed." << std::endl;
  }
}
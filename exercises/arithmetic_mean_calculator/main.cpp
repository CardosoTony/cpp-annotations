#include <iostream>

int main()
{
  float x, y, z;

  std::cout << "Enter the first number: ";
  std::cin >> x;

  std::cout << "Enter the second number: ";
  std::cin >> y;

  std::cout << "Enter the third number: ";
  std::cin >> z;

  float mean = (x + y + z) / 3;

  std::cout << "The mean is " << mean << std::endl;
}
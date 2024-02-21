#include <cmath>
#include <iomanip>
#include <iostream>

int main()
{
  float n1, n2, n3;

  std::cout << "Enter the first number: ";
  std::cin >> n1;

  std::cout << "Enter the second number: ";
  std::cin >> n2;

  std::cout << "Enter the third number: ";
  std::cin >> n3;

  float geomean = powf((n1 * n2 * n3), (1.0f / 3.0f));
  // or
  // float geomean = cbrtf(n1 * n2 * n3);

  std::cout << "Geometric Mean: " << geomean << std::endl;

  return 0;
}
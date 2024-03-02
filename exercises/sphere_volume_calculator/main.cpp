#include <iostream>
#include <cmath>

int main()
{
  double radius, circumference, volume;

  std::cout << "Enter radius: ";
  std::cin >> radius;

  circumference = 2.0 * M_PI * radius;
  volume = (4.0 / 3.0) * M_PI * pow(radius, 3);

  std::cout << "Circumference: " << circumference << std::endl;
  std::cout << "Volume: " << volume << std::endl;
}
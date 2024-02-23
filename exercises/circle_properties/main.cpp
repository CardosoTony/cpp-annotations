// #define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
#include <cstdlib>

float radius()
{
  float radius_value;

  std::cout << "Enter the radius: ";
  std::cin >> radius_value;

  float perimeter = 2 * M_PI * radius_value;

  std::cout << "The perimeter is: " << perimeter << std::endl;

  return radius_value;
}

float area(float radius_value)
{
  float area_value = M_PI * std::pow(radius_value, 2);

  std::cout << "The area is: " << area_value << std::endl;

  return area_value;
}

int main()
{
  float radius_value = radius();

  area(radius_value);

  system("pause");

  return 0;
}

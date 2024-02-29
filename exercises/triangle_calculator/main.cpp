#include <iostream>

int main()
{
  std::cout << "Find the perimeter and area of the triangle" << std::endl;

  float base, side1, side2, height;

  std::cout << "Enter the base: ";
  std::cin >> base;

  std::cout << "Enter the side1: ";
  std::cin >> side1;

  std::cout << "Enter the side2: ";
  std::cin >> side2;

  std::cout << "Enter the height: ";
  std::cin >> height;

  float perimeter = base + side1 + side2;
  float area = (base * height) / 2;

  if ((base + side1 > side2) && (base + side2 > side1) && (side1 + side2 > base))
  {
    std::cout << "Perimeter: " << perimeter << std::endl;
  }
  else
  {
    std::cout << "Such a triangle doesn't exist!\n";
  }

  std::cout << "Area: " << area << "un²\n\n";

  return 0;
}
#include <iostream>

int main()
{
  float width, height;

  std::cout << "Find the perimeter and area of the rectangle" << std::endl;

  std::cout << "Enter the width: ";
  std::cin >> width;

  std::cout << "Enter the height: ";
  std::cin >> height;

  std::cout << "The perimeter of the rectangle is: " << 2 * (width + height) << " un" << std::endl;
  std::cout << "The area of the rectangle is: " << width * height << " un²\n\n";

  return 0;
}
#include <iostream>
#include <sstream>
#include <math.h>

int main()
{
  std::string input1, input2;

  std::cout << "Enter the first coordinate (x1,y1): ";
  std::getline(std::cin, input1);

  std::cout << "Enter the second coordinate (x2,y2): ";
  std::getline(std::cin, input2);

  std::stringstream ss1(input1), ss2(input2);
  double x1, x2, y1, y2;
  char comma;

  ss1 >> x1 >> comma >> y1;
  ss2 >> x2 >> comma >> y2;

  double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

  std::cout << "The distance between the two points is: " << distance << std::endl;

  return 0;
}
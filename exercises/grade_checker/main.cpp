#include <iostream>

int main()
{
  float n1, n2;
  std::cout << "Enter the value of the first assessment: ";
  std::cin >> n1;

  std::cout << "Enter the value of the second assessment: ";
  std::cin >> n2;

  if (n1 >= 6)
  {
    std::cout << "The student has passed!" << std::endl;
  }
  else
  {
    std::cout << "The student has failed!" << std::endl;
  }

  if (n2 >= 6)
  {
    std::cout << "The student has passed!" << std::endl;
  }
  else
  {
    std::cout << "The student has failed!" << std::endl;
  }
}
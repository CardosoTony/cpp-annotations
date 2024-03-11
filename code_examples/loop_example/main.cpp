#include <iostream>

int main()
{
  float number;
  float sum = 0;
  int count = 0;

  std::cout << "Calculate the sum and average of the entered numbers." << std::endl;
  do
  {
    std::cout << "Enter a number (enter 0 to end): ";
    std::cin >> number;

    if (number != 0)
    {
      sum += number;
      count++;
    }
  } while (number != 0);

  std::cout << "The sum of the numbers is: " << sum << std::endl;

  if (count != 0)
  {
    double average = static_cast<double>(sum) / count;
    std::cout << "The average of the numbers is: " << average << std::endl;
  }
  else
  {
    std::cout << "No numbers entered to calculate the average." << std::endl;
  }

  return 0;
}
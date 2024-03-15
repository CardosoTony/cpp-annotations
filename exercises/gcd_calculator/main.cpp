#include <iostream>
#include <string>
#include <vector>

// Input loop, type "end" to finish
std::vector<int> get_input(const std::string &prompt)
{
  std::vector<int> numbers;

  while (true)
  {
    std::cout << prompt;
    std::cout.flush();

    std::string input;
    std::cin >> input;

    if (input == "end")
    {
      break;
    }

    try
    {
      int num = std::stoi(input);
      numbers.push_back(num);
    }
    catch (...)
    {
      std::cout << "Invalid input" << std::endl;
    }
  }
  return numbers;
}

// Recursive function to find the greatest common divisor
int gcd_recursive(int a, int b)
{
  if (b == 0)
  {
    return a;
  }
  return gcd_recursive(b, a % b);
}

// Iterative function to find the greatest common divisor
int gcd_iterative(int a, int b)
{
  while (b != 0)
  {
    int temp = a % b;
    a = b;
    b = temp;
  }
  return a;
}

int main()
{
  std::cout << "GCD Calculator - Greatest Common Divisor" << std::endl;

  std::vector<int> numbers = get_input("Enter a value (type 'end' to finish): ");

  if (numbers.size() < 2)
  {
    std::cout << "At least two values are required." << std::endl;
    return 0;
  }

  int result_recursive = numbers[0];
  int result_iterative = numbers[0];

  for (size_t i = 1; i < numbers.size(); ++i)
  {
    result_recursive = gcd_recursive(result_recursive, numbers[i]);
    result_iterative = gcd_iterative(result_iterative, numbers[i]);
  }

  std::cout << "The GCD between [";
  for (size_t i = 0; i < numbers.size(); ++i)
  {
    if (i == numbers.size() - 1)
    {
      std::cout << numbers[i];
    }
    else
    {
      std::cout << numbers[i] << ", ";
    }
  }
  std::cout << "] using recursive method is: " << result_recursive << std::endl;

  std::cout << "The GCD between [";
  for (size_t i = 0; i < numbers.size(); ++i)
  {
    if (i == numbers.size() - 1)
    {
      std::cout << numbers[i];
    }
    else
    {
      std::cout << numbers[i] << ", ";
    }
  }
  std::cout << "] using iterative method is: " << result_iterative << std::endl;

  return 0;
}
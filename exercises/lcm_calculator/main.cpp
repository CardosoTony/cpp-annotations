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
      std::cout << "Invalid input." << std::endl;
    }
  }
  return numbers;
}

// Function to calculate the greatest common divisor
int gcd(int a, int b)
{
  while (b != 0)
  {
    int temp = a % b;
    a = b;
    b = temp;
  }
  return a;
}

// Function to calculate the least common multiple
int lcm(int a, int b)
{
  return (a * b) / gcd(a, b);
}

// Check if vector contains the value zero
bool contains_zero(const std::vector<int> &numbers)
{
  for (int num : numbers)
  {
    if (num == 0)
    {
      return true;
    }
  }
  return false;
}

int main()
{
  std::cout << "LCM Calculator - Least Common Multiple" << std::endl;

  std::vector<int> numbers = get_input("Enter a value (type 'end' to finish): ");

  if (numbers.size() < 2)
  {
    std::cout << "At least two values are required." << std::endl;
    return 0;
  }

  int result_lcm = numbers[0];

  for (size_t i = 1; i < numbers.size(); ++i)
  {
    result_lcm = lcm(result_lcm, numbers[i]);
  }

  std::cout << "The LCM between [";
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
  std::cout << "] is: " << result_lcm << std::endl;

  if (contains_zero(numbers))
  {
    std::cout << "The LCM of 0 is always 0, so please don't include it." << std::endl;
    return 0;
  }

  return 0;
}
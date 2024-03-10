#include <iostream>
#include <sstream>
#include <string>

int get_input(const std::string &prompt)
{
  std::cout << prompt;
  std::cout.flush();

  std::string input;
  std::getline(std::cin, input);

  std::stringstream ss(input);

  int value;
  if (!(ss >> value) || ss.rdbuf()->in_avail() != 0)
  {
    std::cout << "Please enter a valid number." << std::endl;
    return get_input(prompt);
  }

  return value;
}

void sequence_until_number(int number)
{
  int current = 0;
  int next = 1;

  std::cout << "[";
  while (current <= number)
  {
    std::cout << current;
    current = next;
    next = current + next;
    if (current <= number)
    {
      std::cout << ", ";
    }
  }
  std::cout << "]" << std::endl;
}

void sequence_first_n_number(int number)
{
  int f_0 = 0;
  int f_1 = 1;

  std::cout << "[";
  for (int i = 0; i < number; i++)
  {
    std::cout << f_0;
    if (i < number - 1)
    {
      std::cout << ", ";
    }
    int f_next = f_0 + f_1;
    f_0 = f_1;
    f_1 = f_next;
  }
  std::cout << "]" << std::endl;
}

int main()
{
  int until_number = get_input("Enter a number to display the Fibonacci sequence up to that number: ");
  sequence_until_number(until_number);

  int first_n_number = get_input("Enter a number to display the first 'n' numbers of the Fibonacci sequence: ");
  sequence_first_n_number(first_n_number);

  return 0;
}
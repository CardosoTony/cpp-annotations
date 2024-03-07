#include <iostream>

void checkAge(int age)
{
  if (age >= 18)
  {
    std::cout << "You are of legal age.";
  }
  else
  {
    std::cout << "You are not of legal age";
  }
  std::cout << std::endl;
}

void checkEvenOdd(int number)
{
  if (number % 2 == 0)
  {
    std::cout << number << " is even.";
  }
  else
  {
    std::cout << number << " is odd.";
  }
  std::cout << std::endl;
}

void checkPositiveNegative(int number)
{
  if (number > 0)
  {
    std::cout << number << " is positive.";
  }
  else if (number < 0)
  {
    std::cout << number << " is negative.";
  }
  else
  {
    std::cout << "The number is zero.";
  }
  std::cout << std::endl;
}

void checkSignSum(float number1, float number2, float number3)
{
  float sum = number1 + number2 + number3;

  if (sum > 0)
  {
    std::cout << "The sum is positive: " << sum;
  }
  else if (sum < 0)
  {
    std::cout << "The sum is negative: " << sum;
  }
  else
  {
    std::cout << "The sum is zero.";
  }
  std::cout << std::endl;
}

void isDivisibleByThreeAndFive(int number)
{
  if (number % 3 == 0 && number % 5 == 0)
  {
    std::cout << number << " is divisible by 3 and 5.";
  }
  else
  {
    std::cout << number << " is not divisible by 3 and 5.";
  }
  std::cout << std::endl;
}

int main()
{
  int age, number;
  float number1, number2, number3;

  std::cout << "Enter your age: ";
  std::cin >> age;
  checkAge(age);

  std::cout << "Enter a number: ";
  std::cin >> number;
  checkEvenOdd(number);

  std::cout << "Enter a number: ";
  std::cin >> number;
  checkPositiveNegative(number);

  std::cout << "Enter the first number: ";
  std::cin >> number1;
  std::cout << "Enter the second number: ";
  std::cin >> number2;
  std::cout << "Enter the third number: ";
  std::cin >> number3;
  checkSignSum(number1, number2, number3);

  std::cout << "Enter a number: ";
  std::cin >> number;
  isDivisibleByThreeAndFive(number);

  return 0;
}
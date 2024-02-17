#include <iostream>
#include <iomanip>
#include <string>

// Function to prompt user for data
void promptUserData(
    const std::string &prompt,
    std::string &name,
    int &age,
    float &height)
{
  std::cout << prompt;
  std::getline(std::cin, name);
  std::cout << "Enter your age " << name << ": ";
  std::cin >> age;
  std::cout << "Enter your height [m]: ";
  std::cin >> height;
  std::cin.ignore();
}

int main()
{
  std::string name1, name2, name3;
  int age1, age2, age3;
  float height1, height2, height3;
  int repeats = 35;
  std::string divisionLine;

  divisionLine.append(repeats, '-');

  promptUserData("Enter your name: ", name1, age1, height1);
  promptUserData("Enter your name: ", name2, age2, height2);
  promptUserData("Enter your name: ", name3, age3, height3);

  std::cout << std::endl;
  std::cout << std::left << std::setw(20) << "Name"
            << std::setw(5) << "Age"
            << std::setw(10) << "Height [m]" << std::endl;
  std::cout << divisionLine << std::endl;
  std::cout << std::left << std::setw(20) << name1
            << std::setw(5) << age1
            << std::setw(10) << height1 << std::endl;
  std::cout << std::left << std::setw(20) << name2
            << std::setw(5) << age2
            << std::setw(10) << height2 << std::endl;
  std::cout << std::left << std::setw(20) << name3
            << std::setw(5) << age3
            << std::setw(10) << height3 << std::endl;

  return 0;
}
#include <iostream>
#include <iomanip>
#include <string>

int main()
{
  /*
  string name;

  cout << "Enter your name: ";
  getline(cin, name);
  cout << "Hello, " << name << "!" << endl;

  string name1, name2, name3;
  int age1, age2, age3;

  cout << "Enter your name: ";
  getline(cin, name1);
  cout << "Enter your age: ";
  cin >> age1;
  cin.ignore();

  cout << "Enter your name: ";
  getline(cin, name2);
  cout << "Enter your age: ";
  cin >> age2;
  cin.ignore();

  cout << "Enter your name: ";
  getline(cin, name3);
  cout << "Enter your age: ";
  cin >> age3;

  cout << name1 << " is " << age1 << " years old." << endl;
  cout << name2 << " is " << age2 << " years old." << endl;
  cout << name3 << " is " << age3 << " years old." << endl;
  */

  std::string name4, name5, name6;
  int age4, age5, age6;
  float height4, height5, height6;
  int repeats = 30;
  std::string line;

  line.append(repeats, '-');

  std::cout << "Enter your name: ";
  std::getline(std::cin, name4);
  std::cout << "Enter your age " << name4 << ": ";
  std::cin >> age4;
  std::cout << "Enter your height [m]: ";
  std::cin >> height4;
  std::cin.ignore();

  std::cout << "Enter your name: ";
  std::getline(std::cin, name5);
  std::cout << "Enter your age " << name5 << ": ";
  std::cin >> age5;
  std::cout << "Enter your height [m]: ";
  std::cin >> height5;
  std::cin.ignore();

  std::cout << "Enter your name: ";
  std::getline(std::cin, name6);
  std::cout << "Enter your age " << name6 << ": ";
  std::cin >> age6;
  std::cout << "Enter your height [m]: ";
  std::cin >> height6;
  std::cin.ignore();

  std::cout << std::endl;
  std::cout << std::left << std::setw(20) << "Name"
            << std::setw(5) << "Age"
            << std::setw(10) << "Height" << std::endl;
  std::cout << line << std::endl;
  std::cout << std::left << std::setw(20) << name4 << std::setw(5) << age4 << std::setw(10) << height4 << std::endl;
  std::cout << std::left << std::setw(20) << name5 << std::setw(5) << age5 << std::setw(10) << height5 << std::endl;
  std::cout << std::left << std::setw(20) << name6 << std::setw(5) << age6 << std::setw(10) << height6 << std::endl;
  std::cout << line << std::endl;

  return 0;
}
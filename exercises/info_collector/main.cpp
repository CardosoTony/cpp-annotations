#include <iomanip>
#include <iostream>
#include <limits>
#include <vector>

struct Person
{
  std::string name;
  int age;
  float height;
};

void promptInfos(const std::string &prompt, Person &person)
{
  std::cout << prompt;
  std::getline(std::cin, person.name);
  std::cout << "Enter your age " << person.name << ": ";
  std::cin >> person.age;
  std::cout << "Enter your height [m]: ";
  std::cin >> person.height;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int main()
{
  const int numPeople = 3;
  std::vector<Person> people(numPeople);

  for (int i = 0; i < numPeople; i++)
  {
    promptInfos("Enter your name: ", people[i]);
  }

  std::cout << std::setw(40) << std::setfill('-') << "" << std::endl;
  std::cout << std::setfill(' ');
  std::cout << std::setw(20) << std::left << "| Name"
            << std::setw(6) << "| Age"
            << std::setw(10) << "| Height [m] |" << std::endl;
  std::cout << std::setw(40) << std::setfill('-') << "" << std::endl;
  std::cout << std::setfill(' ');

  for (const auto &person : people)
  {
    std::cout << "| " << std::setw(18) << std::left << person.name
              << "| " << std::setw(4) << person.age
              << "| " << std::setw(10) << person.height << " |" << std::endl;
    std::cout << std::setw(40) << std::setfill('-') << "" << std::endl;
    std::cout << std::setfill(' ');
  }

  std::cout << "Press Enter to exit...";
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  std::cin.get();

  return 0;
}

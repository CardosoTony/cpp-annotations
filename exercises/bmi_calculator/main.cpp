#include <iostream>
#include <cstdlib>

void bmi(float weight, float height)
{
  float bmi = weight / (height * height);

  std::cout << "Your BMI is " << bmi << " = ";

  if (bmi < 18.5)
  {
    std::cout << "Underweight" << std::endl;
  }
  else if (bmi <= 24.9)
  {
    std::cout << "Normal" << std::endl;
  }
  else if (bmi <= 29.9)
  {
    std::cout << "Overweight" << std::endl;
  }
  else if (bmi <= 34.9)
  {
    std::cout << "Obese Class I" << std::endl;
  }
  else if (bmi <= 39.9)
  {
    std::cout << "Obese Class II" << std::endl;
  }
  else
  {
    std::cout << "Obese Class III" << std::endl;
  }
}

int main()
{
  float weight, height;

  std::cout << "Enter your weight [kg]: ";
  std::cin >> weight;

  std::cout << "Enter your height [m]: ";
  std::cin >> height;

  bmi(weight, height);

  system("pause");

  return 0;
}

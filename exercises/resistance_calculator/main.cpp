#include <iostream>

int main()
{
  double resistor1, resistor2, parallel_resistance, series_resistance;

  std::cout << "Enter the value of resistor 1: ";
  std::cin >> resistor1;

  std::cout << "Enter the value of resistor 2: ";
  std::cin >> resistor2;

  parallel_resistance = (resistor1 * resistor2) / (resistor1 + resistor2);
  series_resistance = resistor1 + resistor2;

  std::cout << "The resulting resistance when connected in parallel is: " << parallel_resistance << " ohms\n";

  std::cout << "The resulting resistance when connected in series is: " << series_resistance << " ohms\n";
}
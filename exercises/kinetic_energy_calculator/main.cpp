#include <iostream>
#include <cmath>

int main()
{
  float mass, velocity, kinetic_energy;

  std::cout << "Enter mass [kg]: ";
  std::cin >> mass;

  std::cout << "Enter velocity [m/s]: ";
  std::cin >> velocity;

  kinetic_energy = (mass * std::pow(velocity, 2.0f)) / 2.0f;

  std::cout << "Kinetic energy: " << kinetic_energy << " J\n";

  return 0;
}
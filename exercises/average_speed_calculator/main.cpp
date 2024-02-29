#include <iostream>

int main()
{
  float distance, time, speed;

  std::cout << "Enter the distance [km]: ";
  std::cin >> distance;

  std::cout << "Enter the time [min]: ";
  std::cin >> time;

  speed = distance / (time / 60.0);

  std::cout << "The average speed is " << speed << " km/h\n";

  return 0;
}
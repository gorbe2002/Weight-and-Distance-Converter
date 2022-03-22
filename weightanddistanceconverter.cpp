#include <iostream>

int main() {
  // Program #1 (Weight):
  double mass;
  double surfaceGravity = 0.38; // surface gravity of Mars

  std::cout << "Enter the weight of an item (in lbs): ";
  std::cin >> mass;

  double weight = mass * surfaceGravity;

  std::cout << "That item weighs about " << weight << " lbs on Mars.\n";

  // Program #2 (Distance):
  double miles;
  double conversionFactor = 1.609; // approximate conversion factor from miles to kilometers

  std::cout << "Enter a certain distance (in miles): ";
  std::cin >> miles;

  double kilometers = miles * conversionFactor;

  std::cout << "Your distance is about " << kilometers << " in kilometers.\n";

  return 0;
}

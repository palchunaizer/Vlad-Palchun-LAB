#include <iostream>

int main() {
  float c, f;
  std::cout << "Enter Fahrenheit ";
  std::cin >> f;
  c = (f - 32) / 1.8;
  std::cout << "Temperature in Celsius = " << c;
}
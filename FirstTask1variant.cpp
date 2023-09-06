#include <iostream>
#include <string>
#include <math.h>

int main() {

int a = 4;
double b = 0.5;

double result = 0;

 result = (0,75 * sqrt(b) - 0.5 * pow(a, 1./3)) * sin(b * M_PI / 3);
  std::cout << result;
}

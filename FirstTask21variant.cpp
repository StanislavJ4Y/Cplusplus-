#include <iostream>
#include <string>
#include <cmath>  

int main() {
    int a = 2;
    double b = 13.17;
    double result = sqrt(exp(0.5 * log((1 - cos((a / b) * M_PI)) / (1 + cos((a / b) * M_PI)))) + exp(0.3 * log((1 - cos((a / b) * M_PI)) / (1 + cos((a / b) * M_PI)))));

    std::cout << result << std::endl;

    return 0;
}

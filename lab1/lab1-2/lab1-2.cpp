#include <iostream>
#include <math.h>

int main()
{
    double x, y, z;
    std::cout << "Enter x: ";
    std::cin >> x;
    std::cout << "Enter y: ";
    std::cin >> y;
    std::cout << "Enter z: ";
    std::cin >> z;

    double a = std::pow(9+std::pow(x-y,2), 1.0 / 3.0);
    double b = std::pow(x, 2) + std::pow(y, 2) + 2.0;
    double c = std::exp(std::abs(x-y))*std::pow(std::tan(z),3);
    double s = a / b - c;
    std::cout << "Result s = " << s << std::endl;
    return 0;
}

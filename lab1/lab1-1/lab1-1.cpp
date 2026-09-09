#include <iostream>
#include <math.h>

int main()
{
    double x, y, z, a, b, c, s;
    std::cout << "Enter x: ";
    std::cin >> x;
    std::cout << "Enter y: ";
    std::cin >> y;
    std::cout << "Enter z: ";
    std::cin >> z;
    a = 2.0 * std::cos(x - 2.0 / 3.0);
    b = 1.0 / 2.0 + std::pow(std::sin(y), 2);
    c = 1.0 + std::pow(z, 2) / (3.0 - std::pow(z, 2) / 5.0);
    s = a / b * c;
    std::cout << "Result s = " << s << std::endl;
    return 0;
}

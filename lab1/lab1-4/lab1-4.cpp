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

	double a = std::pow(std::abs(std::cos(x)-std::cos(y)),(1.0+2.0*std::pow(std::sin(y),2)));
	double b = 1+z+std::pow(z,2)/2 + std::pow(z, 3) / 3.0 + std::pow(z, 4) / 4.0;
	double s = a * b;
	std::cout << "Result s = " << s << std::endl;
	return 0;
}

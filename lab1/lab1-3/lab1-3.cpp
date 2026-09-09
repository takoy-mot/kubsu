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

	double a = 1.0+std::pow(std::sin(x+y),2);
	double d = std::pow(x,std::abs(y));
	double b = std::abs(x-(2.0*y/(1.0+std::pow(x*y,2))));
	double c = std::pow(std::cos(std::atan(1.0/z)),2);
	double s = (a / b) * d + c;
	std::cout << "Result s = " << s << std::endl;
	return 0;
}

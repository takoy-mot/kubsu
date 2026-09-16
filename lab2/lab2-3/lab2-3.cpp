#include <iostream>
#include <math.h>

int main()
{
	double x, y, f, a, s;
	int k;
	std::cout << "Enter x: ";
	std::cin >> x;
	std::cout << "Enter y: ";
	std::cin >> y;
	std::cout << "Choose f:\n1 - sh(x)\n2 - x^2\n3 - e^x\n";
	std::cin >> k;
	switch (k)
	{
	case 1: f = std::sinh(x); break;
	case 2: f = x * x; break;
	case 3: f = std::exp(x); break;
	default: std::cout << "F not choosen"; return 1;
	}
	a = x - y;
	if (a == 0) s = f * f + std::cbrt(y) + std::sin(y);
	else if (a > 0) s = std::pow(f - y, 2) + std::log(x);
	else s = std::pow(y - f, 2) + std::tan(y);
	std::cout << "Result s = " << s << std::endl;
	return 0;
}

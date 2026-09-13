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
	case 1: f = sinh(x); break;
	case 2: f = pow(x, 2); break;
	case 3: f = exp(x); break;
	default: std::cout << "F not choosen"; return 1;
	}
	a = x - y;
	if (a == 0) s = pow(f, 2) + pow(y, 1.0 / 3.0) + sin(y);
	else if (a > 0) s = pow(f - y, 2) + log(x);
	else s = pow(y - f, 2) + tan(y);
	std::cout << "Result s = " << s << std::endl;
	return 0;
}

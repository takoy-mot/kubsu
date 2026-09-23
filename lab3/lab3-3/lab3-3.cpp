#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
	double a, b, h, x, y, s, p;
	int n, i;
	std::cout << "Enter a, b, h, n: " << std::endl;
	std::cin >> a >> b >> h >> n;
	x = a;
	const double c = 3.14159265358979 / 4.0;
	do
	{
		p = s = 1.0;
		for (i = 1; i <= n; i++)
		{
			p *= x / i;
			s += p * std::cos(i*c);
		}
		y = exp(x * std::cos(c)) * std::cos(x * std::sin(c));
		std::cout << std::setw(15) << x << std::setw(15) << y << std::setw(15) << s << std::endl;
		x += h;
	}
	while (x <= b + h / 2.0);
	std::cout << std::endl;
	return 0;
}

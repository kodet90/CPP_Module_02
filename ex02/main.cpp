#include "main.h"

int	main() {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << std::endl << "Additional tests:" << std::endl << std::endl;
	a = 1.5f;
	Fixed s(2);
	Fixed d(2.5f);
	std::cout << (a > s) << " // 1.5f > 2" << std::endl;
	std::cout << (a > a) << " // 1.5f > 1.5f" << std::endl;
	std::cout << (a < s) << " // 1.5f < 2" << std::endl;
	std::cout << (a < a) << " // 1.5f < 1.5f" << std::endl;
	std::cout << (a >= s) << " // 1.5f >= 2" << std::endl;
	std::cout << (a >= a) << " // 1.5f >= 1.5f" << std::endl;
	std::cout << (a <= s) << " // 1.5f <= 2" << std::endl;
	std::cout << (a <= a) << " // 1.5f <= 1.5f" << std::endl;
	std::cout << (a == s) << " // 1.5f == 2" << std::endl;
	std::cout << (a == a) << " // 1.5f == 1.5f" << std::endl;
	std::cout << (a != s) << " // 1.5f != 2" << std::endl;
	std::cout << (a != a) << " // 1.5f != 1.5f" << std::endl;
	std::cout << (a + s) << " // 1.5f + 2" << std::endl;
	std::cout << (a + d) << " // 1.5f + 2.5f" << std::endl;
	std::cout << (a - s) << " // 1.5f - 2" << std::endl;
	std::cout << (a - d) << " // 1.5f - 2.5f" << std::endl;
	std::cout << (a * s) << " // 1.5f * 2" << std::endl;
	std::cout << (a * d) << " // 1.5f * 2.5f" << std::endl;
	std::cout << (a / s) << " // 1.5f / 2" << std::endl;
	std::cout << (a / d) << " // 1.5f / 2.5f" << std::endl;
	std::cout << Fixed::min(a, s) << " // min(1.5f, 2)" << std::endl;
	std::cout << Fixed::min(s, a) << " // min(2, 1.5f)" << std::endl;
	std::cout << Fixed::min(a, b) << " // min(1.5f, const (5.05f * 2))" << std::endl;
	std::cout << Fixed::min(b, a) << " // min(const (5.05f * 2), 1.5f)" << std::endl;
	std::cout << Fixed::max(a, s) << " // max(1.5f, 2)" << std::endl;
	std::cout << Fixed::max(s, a) << " // max(2, 1.5f)" << std::endl;
	std::cout << Fixed::max(a, b) << " // max(1.5f, const (5.05f * 2))" << std::endl;
	std::cout << Fixed::max(b, a) << " // max(const (5.05f * 2), 1.5f)" << std::endl;

	return 0;
}
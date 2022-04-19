#include "main.h"

int	main() {
	Point a(0, 0);
	Point b(10, 0);
	Point c(0, 10);
	Point point(3, 2.5f);

	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "point: " << point << std::endl;

	std::cout << "result: " << (bsp(a, b, c, point) ?
	"Point is inside of the triangle" : "Point is outside or on the edge of the"
										" triangle") << std::endl;

	return 0;
}
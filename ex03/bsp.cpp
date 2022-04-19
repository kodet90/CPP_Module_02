#include "main.h"

static Fixed sign (Point p1, Point p2, Point p3)
{
	return (p1.get_x() - p3.get_x()) * (p2.get_y() - p3.get_y())
	- (p2.get_x() - p3.get_x()) * (p1.get_y() - p3.get_y());
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {

	Fixed d1 = sign(point, a, b);
	Fixed d2 = sign(point, b, c);
	Fixed d3 = sign(point, c, a);
//std::cout << "d1: " << d1 << std::endl << "d2: " << d2 << std::endl << "d3: "
// << d3 << std::endl;

	bool has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
	bool has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);
//std::cout << "has_neg: " << has_neg << std::endl << "has_pos: " << has_pos
// << std::endl;

	return !(has_neg && has_pos) && d1 != 0 && d2 != 0 && d3 != 0;
}

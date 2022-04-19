#ifndef CPP_MODULE_02_EX03_POINT_H
#define CPP_MODULE_02_EX03_POINT_H
#include "Fixed.h"

class Point {

public:
	Point();
	Point(float const x, float const y);
	Point(Point const & point);
	virtual ~Point();
	Point &	operator=(Point const & point);

	Fixed	get_x() const;
	Fixed	get_y() const;

private:
	Fixed const	_x;
	Fixed const	_y;

};

std::ostream &	operator<<(std::ostream & o, Point const & point);

#endif //CPP_MODULE_02_EX03_POINT_H

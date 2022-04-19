#include "Point.h"

Point::Point() : _x(0), _y(0) {
	//std::cout << "Default constructor called" << std::endl;
}

Point::Point(float const x, float const y) : _x(x), _y(y) {
	//std::cout << "Float constructor called" << std::endl;
}

Point::Point(Point const & point) {
	//std::cout << "Copy constructor called" << std::endl;
	*this = point;
}

Point::~Point() {
	//std::cout << "Destructor called" << std::endl;
}

Point &	Point::operator=(Point const & point) {
	//std::cout << "Copy assignment operator called" << std::endl;
	if (this != &point) {
		const_cast<Fixed &>(this->_x) = point._x;
		const_cast<Fixed &>(this->_y) = point._y;
	}
	return *this;
}

Fixed	Point::get_x() const {
	return this->_x;
}

Fixed	Point::get_y() const {
	return this->_y;
}

std::ostream &	operator<<(std::ostream & o, Point const & point) {
	return o << "(" << point.get_x() << ", " << point.get_y() << ")";
}

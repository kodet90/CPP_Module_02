#include "Fixed.h"

const int	Fixed::_fractional_bits = 8;

Fixed::Fixed() : _value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const value) : _value(value << Fixed::_fractional_bits) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const value) :
_value(roundf(value * (1 << Fixed::_fractional_bits))) {
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & fixed) {
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed &	Fixed::operator=(Fixed const & fixed) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed) {
		this->_value = fixed._value;
	}
	return *this;
}

int	Fixed::getRawBits() const {
	return this->_value;
}

void	Fixed::setRawBits(int const raw) {
	this->_value = raw;
}

float	Fixed::toFloat() const {
	return this->_value / static_cast<float>(1 << Fixed::_fractional_bits);
}

int	Fixed::toInt() const {
	return this->_value >> Fixed::_fractional_bits;
}

std::ostream &	operator<<(std::ostream & o, Fixed const & fixed) {
	return o << fixed.toFloat();;
}

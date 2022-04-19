#ifndef CPP_MODULE_02_EX01_FIXED_H
#define CPP_MODULE_02_EX01_FIXED_H
#include <iostream>
#include <cmath>

class Fixed {

public:
	Fixed();
	Fixed(int const value);
	Fixed(float const value);
	Fixed(Fixed const & fixed);
	virtual ~Fixed();
	Fixed &	operator=(Fixed const & fixed);

	int	getRawBits() const;
	void	setRawBits(int const raw);

	float	toFloat() const;
	int	toInt() const;

private:
	int	_value;
	static const int	_fractional_bits;

};

std::ostream &	operator<<(std::ostream & o, Fixed const & fixed);

#endif //CPP_MODULE_02_EX01_FIXED_H

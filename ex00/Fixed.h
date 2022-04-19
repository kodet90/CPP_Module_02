#ifndef CPP_MODULE_02_EX00_FIXED_H
#define CPP_MODULE_02_EX00_FIXED_H
#include <iostream>

class Fixed {

public:
	Fixed();
	Fixed(Fixed const & fixed);
	virtual ~Fixed();
	Fixed &	operator=(Fixed const & fixed);

	int	getRawBits() const;
	void	setRawBits(int const raw);

private:
	int	_value;
	static const int	_fractional_bits;

};

#endif //CPP_MODULE_02_EX00_FIXED_H

#ifndef CPP_MODULE_02_EX03_FIXED_H
#define CPP_MODULE_02_EX03_FIXED_H
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
	bool	operator>(Fixed const & fixed) const;
	bool	operator<(Fixed const & fixed) const;
	bool	operator>=(Fixed const & fixed) const;
	bool	operator<=(Fixed const & fixed) const;
	bool	operator==(Fixed const & fixed) const;
	bool	operator!=(Fixed const & fixed) const;
	Fixed	operator+(Fixed const & fixed) const;
	Fixed	operator-(Fixed const & fixed) const;
	Fixed	operator*(Fixed const & fixed) const;
	Fixed	operator/(Fixed const & fixed) const;
	Fixed	operator++();
	Fixed 	operator++(int);
	Fixed	operator--();
	Fixed	operator--(int);

	int		getRawBits() const;
	void	setRawBits(int const raw);

	float	toFloat() const;
	int		toInt() const;

	static Fixed & 			min(Fixed & fixed1, Fixed & fixed2);
	static Fixed const &	min(Fixed const & fixed1, Fixed const & fixed2);
	static Fixed &			max(Fixed & fixed1, Fixed & fixed2);
	static Fixed const &	max(Fixed const & fixed1, Fixed const & fixed2);

private:
	int					_value;
	static const int	_fractional_bits;

};

std::ostream &	operator<<(std::ostream & o, Fixed const & fixed);

#endif //CPP_MODULE_02_EX03_FIXED_H

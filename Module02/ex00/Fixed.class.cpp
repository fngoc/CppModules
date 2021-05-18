#include "Fixed.class.hpp"

Fixed::Fixed() : fix_point(0) {
	cout << "Default constructor called" << endl;
}

Fixed::Fixed(const Fixed &fixed) {
	cout << "Copy constructor called" << endl;
	*this = fixed;
}

Fixed::~Fixed() {
	cout << "Destructor called" << endl;
}

Fixed& Fixed::operator=(const Fixed &fixed) {
	cout << "Assignation operator called" << endl;
	this->fix_point = fixed.getRawBits();
	return *this;
}

int Fixed::getRawBits() const {
	cout << "getRawBits member function called" << endl;
	return this->fix_point;
}

void Fixed::setRawBits(const int raw) {
	cout << "getRawBits member function called" << endl;
	this->fix_point = raw;
}

int Fixed::bits = 8;

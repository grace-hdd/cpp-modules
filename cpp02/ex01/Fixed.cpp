#include "Fixed.hpp"

// Default Constructor
Fixed::Fixed() : _fixedPointValue(0) {
    std::cout << "Default constructor called" << std::endl;
}

// Copy Constructor
Fixed::Fixed(const Fixed &other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

// Copy Assignment Operator
Fixed &Fixed::operator=(const Fixed &other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->_fixedPointValue = other.getRawBits();
    return *this;
}

// Destructor
Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

// Get Raw Bits
int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixedPointValue;
}

// Set Raw Bits
void Fixed::setRawBits(int const raw) {
    this->_fixedPointValue = raw;
}

// Int Constructor
Fixed::Fixed(const int n) {
    std::cout << "Int constructor called" << std::endl;
    this->_fixedPointValue = n << this->_fractionalBits;
}

// Float Constructor
Fixed::Fixed(const float f) {
    std::cout << "Float constructor called" << std::endl;
    this->_fixedPointValue = roundf(f * (1 << this->_fractionalBits));
}

// toFloat
float Fixed::toFloat(void) const {
    return (float)this->_fixedPointValue / (1 << this->_fractionalBits);
}

// toInt
int Fixed::toInt(void) const {
    return this->_fixedPointValue >> this->_fractionalBits;
}

// Stream Insertion Operator Overload
std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
    out << fixed.toFloat();
    return out;
}
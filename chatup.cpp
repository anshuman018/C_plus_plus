#include <iostream>
#include <vector>
#include <stdexcept>

template<typename T>
class ComplexNumber {
private:
    T real;
    T imaginary;
public:
    ComplexNumber(T real, T imaginary) : real(real), imaginary(imaginary) {}

    ComplexNumber operator+(const ComplexNumber& other) const {
        return ComplexNumber(real + other.real, imaginary + other.imaginary);
    }

    ComplexNumber operator-(const ComplexNumber& other) const {
        return ComplexNumber(real - other.real, imaginary - other.imaginary);
    }

    ComplexNumber operator*(const ComplexNumber& other) const {
        return ComplexNumber(real * other.real - imaginary * other.imaginary,
                             real * other.imaginary + imaginary * other.real);
    }

    ComplexNumber operator/(const ComplexNumber& other) const {
        T denominator = other.real * other.real + other.imaginary * other.imaginary;
        if (denominator == 0)
            throw std::invalid_argument("Division by zero");
        return ComplexNumber((real * other.real + imaginary * other.imaginary) / denominator,
                             (imaginary * other.real - real * other.imaginary) / denominator);
    }

    friend std::ostream& operator<<(std::ostream& os, const ComplexNumber& complex) {
        os << complex.real << (complex.imaginary >= 0 ? " + " : " - ") << std::abs(complex.imaginary) << "i";
        return os;
    }
};

int main() {
    try {
        ComplexNumber<double> c1(3.0, 4.0);
        ComplexNumber<double> c2(1.0, -2.0);

        std::cout << "c1: " << c1 << std::endl;
        std::cout << "c2: " << c2 << std::endl;
        std::cout << "c1 + c2: " << c1 + c2 << std::endl;
        std::cout << "c1 - c2: " << c1 - c2 << std::endl;
        std::cout << "c1 * c2: " << c1 * c2 << std::endl;
        std::cout << "c1 / c2: " << c1 / c2 << std::endl;

        // Attempt division by zero
        ComplexNumber<double> c3(0.0, 0.0);
        std::cout << "c1 / c3: " << c1 / c3 << std::endl; // This line should throw an exception
    }
    catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}

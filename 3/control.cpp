#include <iostream>
#include <string>

class Fraction {
    int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
    int n, d;

public:
    Fraction(int n, int d = 1) : n(n / gcd(n, d)), d(d / gcd(n, d)) {}
    int num() const { return n; }
    int den() const { return d; }

    Fraction& operator*=(const Fraction& rhs) {
        int new_n = n * rhs.n / gcd(n * rhs.n, d * rhs.d);
        d = d * rhs.d / gcd(n * rhs.n, d * rhs.d);
        n = new_n;
        return *this;
    }

    friend bool operator==(const Fraction& lhs, const Fraction& rhs) {
        return lhs.n == rhs.n && lhs.d == rhs.d;
    }

    friend bool operator!=(const Fraction& lhs, const Fraction& rhs) {
        return !(lhs == rhs);
    }

    friend Fraction operator*(const Fraction& lhs, const Fraction& rhs) {
        Fraction result = lhs;
        result *= rhs;
        return result;
    }

    friend std::ostream& operator<<(std::ostream& os, const Fraction& f) {
        os << f.n << "/" << f.d;
        return os;
    }
};

int main() {
    Fraction f1(3, 8), f2(1, 2), f3(10, 2);
    std::cout << (f1 == f2) << std::endl;
    std::cout << (f1 != f2) << std::endl;
    std::cout << f1 << " * " << f2 << " = " << f1 * f2 << std::endl
              << f2 << " * " << f3 << " = " << f2 * f3 << std::endl
              << 2 << " * " << f1 << " = " << 2 * f1 << std::endl;
    return 0;
}
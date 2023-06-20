#include <iostream>

template<typename T>
class Fraction {
    T n, d;

public:
    Fraction(T n, T d = 1) : n(n), d(d) {}
    T num() const { return n; }
    T den() const { return d; }

    Fraction& operator*=(const Fraction& rhs) {
        n *= rhs.n;
        d *= rhs.d;
        simplify();
        return *this;
    }

    void simplify() {
        T gcd_val = gcd(n, d);
        n /= gcd_val;
        d /= gcd_val;
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

    // Helper function to calculate the greatest common divisor (gcd)
    static T gcd(T a, T b) {
        return b == 0 ? a : gcd(b, a % b);
    }
};

int main() {
    Fraction<int> f1(3, 8), f2(1, 2), f3(10, 2);
    std::cout << (f1 == f2) << std::endl;
    std::cout << (f1 != f2) << std::endl;
    std::cout << f1 << " * " << f2 << " = " << f1 * f2 << std::endl;
    std::cout << f2 << " * " << f3 << " = " << f2 * f3 << std::endl;
    std::cout << 2 << " * " << f1 << " = " << 2 * f1 << std::endl;

 
}

//y pones que no hay error de compilacion
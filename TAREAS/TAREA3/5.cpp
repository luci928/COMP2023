#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int result = 1;
    
    for (int i = 2; i <= 20; i++) {
        result = lcm(result, i);
    }
    
    cout << "El entero positivo mas pequeÃ±o es " << result << endl;
    
    return 0;
}
#include <iostream>
#include <cmath>

bool isPrime(int n);
void twinPrimes();

int main() {
    twinPrimes();
}

void twinPrimes() {
    for (int i = 3; i < pow(10, 5); i += 2) {
        if (isPrime(i) && isPrime(i + 2)) {
            std::cout<<i<<" "<<i+2<<std::endl;
        }
    }
}
bool isPrime(int n) {
    int c(0);
    for (int i = 1; i < n; ++i) {
        if (n % i == 0) {
            ++c;
        }
        if (c > 2) {
            return false;
        }
    }
    return true;
}

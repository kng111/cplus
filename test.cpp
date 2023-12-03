#include <iostream>

int main() {
    mpz_class result = 0;

    for (int i = 1; i <= 1001001000; ++i) {
        result += mpz_class(i) * mpz_class(i);
    }

    std::cout << result << std::endl;

    return 0;
}

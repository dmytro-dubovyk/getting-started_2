#include <bitset>
#include <iostream>
#include <iomanip>

int main() {
    std::cout << "Floating point numbers:" << std::endl;
    std::cout << 9.87654321f << std::endl;
    std::cout << 987.654321f << std::endl;
    std::cout << 987654.321f << std::endl;
    std::cout << 9876543.21f << std::endl;
    std::cout << 0.0000987654321f << std::endl;
    std::cout << std::setprecision(8);
    std::cout << 3.33333333333333333333333333333333333333f << std::endl; // f suffix means float
    std::cout << 3.33333333333333333333333333333333333333 << std::endl; // no suffix means double

    float f { 123456789.0f }; // f has 10 significant digits
    std::cout << std::setprecision(9); // to show 9 digits in f
    std::cout << "f = " << f << std::endl;

    double d{0.1};
    std::cout << "d (with rounding) = " << d << '\n'; // use default cout precision of 6
    std::cout << std::setprecision(17);
    std::cout << "d = " << d << std::endl;

    // long long int literal digit separator
    std::cout << 12'345'678'901'245LL << std::endl
              // binary literal digit separator
              << 0b1000'111'0 << std::endl

              // hexadecimal literal digit separator
              << 0X12A'2b4 << std::endl;

    const char eight_and_three = 8 | 3;
    std::cout << "8 in bunary is = " << std::bitset<8>(8) << std::endl;
    std::cout << "3 in bunary is = " << std::bitset<8>(3) << std::endl;
    std::cout << " 8 | 3 = " << std::bitset<8>(eight_and_three) << std::endl;
    std::cout << " 8 & 3 = " << std::bitset<8>(8 & 3) << std::endl;

    const int myvar = 25;
    const int* foo = &myvar;
    const int bar = myvar;

    std::cout << "foo = " << foo << std::endl;
    std::cout << "*foo = " << *foo << std::endl;
    std::cout << "bar = " << bar << std::endl;

    const uint8_t size = 5;
    int numbers[size] = {1, 2, 3, 4, 5};
    for (auto i = 0; i < 5; i++) {
        std::cout << "numbers[" << i << "] = " << numbers[i] << std::endl;
    }

    std::array<int, 3> a = {10, 20, 30};
    std::cout << "printing a:" << std::endl;
    for (const auto& value : a) {
        std::cout << value << std::endl;
    }
    std::cout << "finished printing a" << std::endl;

    return 0;
}

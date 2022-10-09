#include <iostream>
#include <cmath>

int main() {
    // A
    int a;
    int b;
    std::cin >> a >> b;
    std::cout << a << ' ' << b << std::endl;
    // B
    std::printf("a = %X\n", &a);
    std::printf("b = %X\n", &b);
    // C in process
    return 0;
}

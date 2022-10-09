#include <iostream>
#include <cmath>

int main() {
    // A
//    std::cout << "For exit write '0'...\n";
//    int summa = 0;
//    int count = 0;
//    int number;
//    std::cin >> number;
//    while (number != 0)
//    {
//        summa += number;
//        count ++;
//        std::cin >> number;
//    }
//    std::cout << summa / count << std::endl;

    // B
    int step;
    std::cout << "Write down step...\n";
    std::cin >> step;
    std::cout << "For exit write '0'...\n";
    int summa = 0;
    int count = 0;
    int number;
    std::cin >> number;
    while (number != 0)
    {
        count ++;
        if ((count + 1) % step == 0 or count == 1)
        {
            summa += number;
            std::cout << summa << std::endl;
        }
        std::cin >> number;
    }
    std::cout << summa / (count / step) << std::endl;
    return 0;
}

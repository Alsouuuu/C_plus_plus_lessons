#include <iostream>
#include <cmath>

int main() {
    std::string name;
    int age;
    double score;
    std::cout << "Enter data...\n";
    std::cin >> name >> age >> score;

    std::cout << name << age << score << std::endl;
    std::printf("Шансы получить %f баллов у '%s' равны %d%%", score, name.data(), abs(age - 100));
    return 0;
}

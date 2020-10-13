#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    float a{};
    std::cout << "¬ведите длину ребра куба: ";
    std::cin >> a;
    while (a <= 0) {
        std::cout << "¬ведите длину ребра куба больше 0: ";
        std::cin >> a;
    }
    std::cout << "ѕлощадь боковой поверхности : " << 4 * a * a << std::endl
    << "ќбъем куба : " << a * a * a << std::endl;
     
    system("pause");
    return 0;
}
/*Трофимов Данило ІП-02
Лабораторна робота 1
Варіант 34*/
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    float a{};
    std::cout << "Введите длину ребра куба: ";
    std::cin >> a;
    float s = 4 * a * a;
    float v = a * a * a;
    std::cout << "Площадь боковой поверхности : " << s << std::endl;
    std::cout << "Объем куба : " << v << std::endl;

        system("pause");
    return 0;
}
/*Трофимов Данило ІП-02
Лабораторна робота 1
Варіант 14*/
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    float x; //длина первой стороны треугольника
    float y; //длина второй стороны треугольника
    float z; //длина третей стороны треугольника
    std::cout << "Введите длину первой стороны треугольника: ";
    std::cin >> x;
    std::cout << "Введите длину второй стороны треугольника: ";
    std::cin >> y;
    std::cout << "Введите длину третей стороны треугольника: ";
    std::cin >> z;

    if (x + y > z && x + z > y && y + z > x) {
        cout << "Треугольник существует." << endl;
    }
    else {
        cout << "Треугольник не существует" << endl;
    }

        system("pause");
    return 0;
}

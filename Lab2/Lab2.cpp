/*Трофимов Данило ІП-02
Лабораторна робота 2
Варіант 14*/
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    float x; //длина первой стороны треугольника
    float y; //длина второй стороны треугольника
    float z; //длина третей стороны треугольника
    cout << "Введите длину первой стороны треугольника: ";
    cin >> x;
    cout << "Введите длину второй стороны треугольника: ";
    cin >> y;
    cout << "Введите длину третей стороны треугольника: ";
    cin >> z;

    if (x <= 0 || y <= 0 || z <= 0) {
        cout << "Стороны треугольника должны быть больше 0" << endl;
    }
    if (x + y > z && x + z > y && y + z > x) {
        cout << "Треугольник существует." << endl;
    }
    else {
        cout << "Треугольник не существует" << endl;
    }

    system("pause");
    return 0;
}

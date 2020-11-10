/*Трофимов Данило ІП-02
Лабораторна робота 3
Варіант 5*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double x = 0.56;
    double n = 0;
    double s = 0;
    double k = 1;
    double m = 0.0001;

    while (fabs(k) > m) {
        k = (pow(-1, n) * (pow(x, 2) * (n + 1)) / (pow(2, n) + 1));
        s = k + s;
        n = n + 1;
        printf("%12.9f\n", s);
    }
    system("pause");
    return 0;
}
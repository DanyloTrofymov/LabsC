/*Трофимов Данило ІП-02
Лабораторна робота 4
Варіант 5*/
#include <iostream>
#include <cmath>
using namespace std;

int fact(int n)
{
    if (n < 0)
        return (0);
    if (n == 0)
        return (1);
    else
    {
        return (n * fact(n - 1));
    }
};


int main() {
    setlocale(LC_ALL, "Russian");

    while (true)
    {
        double s = 0;
        double x;
        double q;
        int n;
        cout << "Введите значение x: "; cin >> x;
        cout << "Введите количество членов ряда: "; cin >> n;
        if (n > 0) {

            for (int i = 0; i < n; i++)
            {
                q = ((pow(x, i)) / fact(i));
                s = s + q;
            }
            cout << "Сумма первыx " << n << " членов равна " << s << endl;
            break;
        }
        else {
            cout << "Количество членов ряда должно быть больше 0" << endl;
            continue;
        }
    }

    system("pause");
    return 0;
}
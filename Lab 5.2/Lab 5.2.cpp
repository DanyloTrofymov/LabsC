/*Трофимов Данило ІП-02
Лабораторна робота 5
Варіант 11*/

#include <iostream>

using namespace std;

int main()
{
    int sum;
    int num;
    int a;
    int b;
    int c;

        for (int i = 100; i <= 999; i++)
        {
            a = i / 100;
            b = (i / 10) % 10;
            c = i % 10;
            sum = pow(a, 3) + pow(b, 3) + pow(c, 3);
            num = i;
            if (sum == num)
            {
                cout << num << endl;
            }
        }
    system("pause");
    return 0;
}
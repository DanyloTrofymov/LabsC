/*Трофимов Данило ІП-02
Лабораторна робота 4
Варіант 11*/
#include <iostream>

using namespace std;

int main()
{
    int sum;
    int num;

    for (int i = 1; i <= 9; i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            for (int k = 0; k <= 9; k++)
            {
                sum = pow(i, 3) + pow(j, 3) + pow(k, 3);
                num = i * 100 + j * 10 + k;
                if (sum == num)
                {
                    cout << num << endl;
                }
            }
        }
    }
    system("pause");
    return 0;
}
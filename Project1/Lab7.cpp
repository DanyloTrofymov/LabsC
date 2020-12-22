/*Трофимов Данило ІП-02
Лабораторна робота 7
Варіант 34*/

#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <algorithm>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

    int*  B;
    int n;

    cout << "Введiть розмiр масиву: "; 
    cin >> n;
    B = new int[n];
    srand (time(NULL));
    for (int i = 0; i < n; ++i)
    {
        B[i] = rand() % 101 - 50;
        cout << B[i] << " ";
    }
    cout << endl;

    int min = B[0];
    int maxI;
    for (int i = 0; i < n; ++i)
    {
        if (B[i] < min)
        {
            min = B[i];
            maxI = i+1;
        }
    }
    cout << "Мiнiмальний елемент " << min << " за номером " << maxI << endl;

    for (int startIndex = 0; startIndex < maxI - 1; ++startIndex)
    {
        int biggestIndex = startIndex;
        for (int currentIndex = startIndex + 1; currentIndex < maxI; ++currentIndex)
        {
            if (B[currentIndex] > B[biggestIndex])
                biggestIndex = currentIndex;
        }
        swap(B[startIndex], B[biggestIndex]);
    }
    cout << "Сортований масив до "<< maxI << " елемента" << endl;

    for (int i = 0; i < maxI; ++i)
        cout << B[i] << ' ';

    for (int i = maxI; i < n; ++i)
        cout << B[i] << ' ';
    cout << endl;
	system("pause");
	return 0;
}

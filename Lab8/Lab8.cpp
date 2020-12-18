/*Трофимов Данило ІП-02
Лабораторна робота 8
Варіант 34*/

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std; 
float init();
int** matrix_fill(int n);
void matrix_work(int** matrix, int size);
void matrix_print(int** matrix, int size);
void matrix_del(int** matrix, int size);

int main() 
{
	setlocale(LC_ALL, "Russian");
    int size = init();

    int** matrix = matrix_fill(size); 
    matrix_fill(size);
    matrix_print(matrix, size); 
    matrix_work(matrix,  size);
    matrix_del(matrix, size);
    system("pause");
    return 0;
}

float init()
{
    float n;
    cout << "Введите размер матрицы: "; cin >> n;
    return n;
}

int** matrix_fill(int n)
{
    int size = n;

    int** matrix = new int* [size];

    for (int i = 0; i < size; i++)
    {
        matrix[i] = new int[size];
    }


    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrix[i][j] = rand() %16;
        }
            
    }

    return matrix;
}

void matrix_print(int** matrix, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%4d", matrix[i][j]);
        }
        cout << endl;
    }
}
 

void matrix_work(int** matrix, int size) 
{
    bool exist = false;
    for (int rowInd=0; rowInd<size; rowInd++)
    {
        for (int colInd = 0; colInd < size; colInd++) {
            bool ismin = true;
            bool ismax = true;
            int CurrElement = matrix[rowInd][colInd];
            for (int i = 0; i < size; i++) 
             {
                if (CurrElement > matrix[rowInd][i])
                    ismin = false;
             }

            for (int i = 0; i < size; i++)
            {
                if (CurrElement < matrix[i][colInd])
                    ismax = false;
            }
            if (ismin && ismax) {
                cout << "Седловая точка " << CurrElement << " с индексом [" << rowInd+1 << "][" << colInd+1 << "]" << endl;
                exist = true;
            }
            
        }
    }
    if (exist == false)
        cout << "Седловых точек нет " << endl;

}

void matrix_del(int** matrix, int size)
{
    for (int i = 0; i < size; i++) {
        delete [] matrix[i];
    }
    delete[] matrix;
}
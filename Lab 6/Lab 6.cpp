/*Трофимов Данило ІП-02
Лабораторна робота 6
Варіант 34*/


#include <iostream>
#include <cmath>

using namespace std;

float x, xmax, y, ymax, anglemax, angle, imax, q, qmax;
int n;
const float pi = 3.141592;

float degree(float angle)
{
	return((angle * pi) / 180);
}

float square(float x1, float y1, float angle1)
{
	return((x1 * y1 * sin(degree(angle1))) / 2);
}

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Введiть кiлькiсть трикутникiв: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << "Введiть довжину першоi сторони трикутника: ";
		cin >> x;
		cout << "Введiть довжину другоi сторони трикутника: ";
		cin >> y;
		cout << "Введiть кут у градусах: ";
		cin >> angle;
		q = square(x, y, angle);
		if (q > qmax) {
			qmax = q;
			xmax = x;
			ymax = y;
			imax = i;
			anglemax = angle;
		}
	}
	cout << "Найбiльший трикутник № " << imax << " зi сторонами " << xmax << " i " << ymax << ", кутом " << anglemax << " i площею " << qmax << endl;
	system("pause");
	return 0;
}

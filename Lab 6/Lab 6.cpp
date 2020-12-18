/*�������� ������ ��-02
����������� ������ 6
������ 34*/


#include <iostream>
#include <cmath>

using namespace std;

const float pi = 3.141592;

float degree(float angle);

float square(float x1, float y1, float angle1);

int main()
{
	setlocale(LC_ALL, "Russian");

	float x, xmax, y, ymax, anglemax, angle, imax, q, qmax=0;
	int n;

	cout << "����i�� �i���i��� ���������i�: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << "����i�� ������� �����i ������� ����������: ";
		cin >> x;
		cout << "����i�� ������� �����i ������� ����������: ";
		cin >> y;
		cout << "����i�� ��� � ��������: ";
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
	cout << "����i����� ��������� � " << imax << " �i ��������� " << xmax << " i " << ymax << ", ����� " << anglemax << " i ������ " << qmax << endl;
	system("pause");
	return 0;
}

float degree(float angle)
{
	return((angle * pi) / 180);
}

float square(float x1, float y1, float angle1)
{
	return((x1 * y1 * sin(degree(angle1))) / 2);
}
/*�������� ������ ��-02
����������� ������ 1
������ 14*/
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    float x; //����� ������ ������� ������������
    float y; //����� ������ ������� ������������
    float z; //����� ������ ������� ������������
    std::cout << "������� ����� ������ ������� ������������: ";
    std::cin >> x;
    std::cout << "������� ����� ������ ������� ������������: ";
    std::cin >> y;
    std::cout << "������� ����� ������ ������� ������������: ";
    std::cin >> z;

    if (x + y > z && x + z > y && y + z > x) {
        cout << "����������� ����������." << endl;
    }
    else {
        cout << "����������� �� ����������" << endl;
    }

        system("pause");
    return 0;
}
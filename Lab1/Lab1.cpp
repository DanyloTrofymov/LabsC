#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    float a{};
    std::cout << "������� ����� ����� ����: ";
    std::cin >> a;
    while (a <= 0) {
        std::cout << "������� ����� ����� ���� ������ 0: ";
        std::cin >> a;
    }
    std::cout << "������� ������� ����������� : " << 4 * a * a << std::endl
    << "����� ���� : " << a * a * a << std::endl;
     
    system("pause");
    return 0;
}
#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

char String[30000];

int Words[15000];


void sortStr(int Number);
int countStr();

int main()
{
    setlocale(LC_ALL, "Russian");
    printf("Введите строку >\n");
    gets_s(String);
    int num = countStr();
    sortStr(num);
    return 0;
}

int countStr()
{
    int i;
    int Flag;
    int Number;
    for (Number = 0, Flag = 1, i = 0; String[i]; i++)
    {

        if (String[i] == ' ')
        {
            String[i] = 0;
            Flag = 1;
        }

        else if (Flag)
        {
            Words[Number++] = i;
            Flag = 0;
        }
    }
    cout << "количество слов " << Number << endl;

    return Number;
}
void sortStr(int Number)
{
    int i, j, Temp;
    for (j = Number - 1; j > 0; j--)
        for (i = 0; i < j; i++)
            if (strcmp(&String[Words[i]], &String[Words[i + 1]]) > 0)
            {
                Temp = Words[i];
                Words[i] = Words[i + 1];
                Words[i + 1] = Temp;
            }


    for (i = 0; i < Number; i++)
        cout << &String[Words[i]] << endl;

}

#include <iostream>
#include "ModulesKarpikov.h"
#include "windows.h"

using namespace std;

int main()
{
    system("chcp 1251 & cls");
    char letter = 0;
    information();
    while(true) {
        cout << "��� ��������� s_calculation, �� ������i��� v; " << endl;
        cout << "��� ���������� ��������� ��  �i���i��� ��i�, �� ������i�� n; " << endl;
        cout << "��� ��������� ����i� ��������� � i��� �������, �� ������i�� m; " << endl;
        cout << "��� ��������� ����� � ��i����� �������, �� ������i�� q; " << endl;
        cout << "��� ����� � ��������, �� ������i��� w  ��� W. " << endl;
        cout << "���� �������: ";
        cin >> letter;
        cout << endl;
        if (letter == 'v')
            s_calculation();
        if (letter == 'n')
            calculation_salary();
        if (letter == 'm')
            sizeOfSocks();
        if (letter == 'q')
            binarySystem();
        if (letter == 'w' || letter == 'W') {
            break;
        }
        else {
            cout << endl << endl;
            Beep(370, 500);
        }
    }
}

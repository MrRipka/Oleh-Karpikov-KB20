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
        cout << "ўоб викликати s_calculation, то натиснiсть v; " << endl;
        cout << "ўоб порахувати зарплатню за  кiлькiстю днiв, то натиснiть n; " << endl;
        cout << "ўоб перевести розмiр шкарпеток в iншу систему, то натиснiть m; " << endl;
        cout << "ўоб перевести число в двiйкову систему, то натиснiть q; " << endl;
        cout << "ўоб вийти з програми, то натиснiсть w  або W. " << endl;
        cout << "¬аша команда: ";
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

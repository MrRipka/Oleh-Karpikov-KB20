#ifndef MODULESKARPIKOV_H
#define MODULESKARPIKOV_H

#include <iostream>
#include <math.h>

using namespace std;

string information() {
    string inf = "<<C>>���������: ������� ���� ���������";
    cout << inf << endl;
    return inf;
}
int check(int number) {
    bool valid = false;
    while (!valid){
        valid = true;
        cin >> number;
        if(cin.fail()) {
            cin.clear();
            cin.ignore();
            valid = false;
        }
    }
    return number;
}
double s_calculation() {
    double x = 0, y = 0, z = 0, S = 0;
    const double PI = 3.141592653589793;
    cout << "����i�� �: ";
    x = check(x);
    while(x < 0|| x == 0){
        if(x < 0 || x == 0){
            cout << "� �� ���� ���� ����� 0";
        }
        x = check(x);
    }
    while(x < y || y == 0 || y < 0 || y == x-1) {
        cout << "����i�� �: ";
        if(x <= y || y < 0) {
            cout << "y �� ���� ���� �i���� � ��  ����� ����:  ";
        }
        y = check(y);
    }
    while(z == 0 || z < 0){
        cout << "����i�� z: ";
        if(z < 0 || z == 0){
            cout << "z �� ���� ����  �� ���i����a�� ����.  ";
        }
        z = check(z);
    }
    S = (z + (2*pow(y,2)))/(log(x - y)) + sqrt(PI * x);
    cout << "���������: " << S;
    return S;
}
int validationForSalary() {
    int i = 0;
    while (!(cin >> i)) {
        cout << "����i�� �����: ";
        cin.clear();
        fflush(stdin);
    }
    while(i < 0) {
        if(i < 0) {
            cout << "����� ������� ���� �i���� 0: ";
            cin.clear();
            fflush(stdin);
        }
        i = validationForSalary();
    }
    return i;
}
double calculation_salary () {
    int workDays = 0, salary = 0;
    double tax1 = 0, tax2 = 0, tax3 = 0, tax4 = 0, taxes = 0, salaryWithTaxes = 0;
    cout << "����i�� �i���i��� ��i�: ";
    workDays = validationForSalary();
    salary = workDays * 8 * 450;
    cout << "����������  ����  � ������i: " << salary << endl;
    tax1 = (salary * 15) / 100;
    cout << "������� ��  �������� �i������: " << tax1 << endl;
    tax2 = (salary * 2) / 100;
    cout << "������� �� ����i����� �����: " << tax2 << endl;
    tax3 = (salary * 0.6) / 100;
    cout << "������� �� ����� � � ��������'�������� ���� ����� ���i ������ ��� ������� ��  ��� ��� ������i���: " << tax3 << endl;
    tax4 = salary / 100;
    cout << "������� ��  ������������'������ ���� �� ���i ���� ��� ��� ��� � ��'���� � ���� ����� ��� ��� �� ���� �����i: " << tax4 << endl;
    taxes = tax1 + tax2 + tax3 + tax4;
    cout << "��������  ����  �� ������ ������i�: " << taxes << endl;
    salaryWithTaxes = salary - taxes;
    cout << "�i�����  ����  ��������i �����������: " << salaryWithTaxes;
    return taxes;
    return salary;
}
int validationForSize() {
    int i = 0;
    while (!(cin >> i)) {
        cout << "����i�� �����: ";
        cin.clear();
        fflush(stdin);
    }
    while(i < 23 || i == 24 || i == 26 || i == 28 || i == 30 || i > 31) {
        if(i < 23 || i == 24 || i == 26 || i == 28 || i == 30 || i > 31 ) {
            cout << "����� ������� ���� �i���� 0 ��  �� ���i������� ������ 24,26,28,30 ��  �i���� 31: ";
            cin.clear();
            fflush(stdin);
        }
        i = validationForSize();
    }
    return i;
}
int sizeOfSocks () {
    int sizeUkr = 0;
    cout << "����i�� ����i� ���������(23, 25, 27, 29, 31): ";
    sizeUkr = validationForSize();
    switch (sizeUkr) {
    case 23:
        cout << "����i� ��������� � ������������i�, ��� � : 8" << endl;
        cout << "����i� ��������� � �� : 37/38" << endl;
        break;
    case 25:
        cout << "����i� ��������� � ������������i�, ��� � : 9" << endl;
        cout << "����i� ��������� � �� : 39/40" << endl;
        break;
    case 27:
        cout << "����i� ��������� � ������������i�, ��� � : 10" << endl;
        cout << "����i� ��������� � �� : 41/42" << endl;
        break;
    case 29:
        cout << "����i� ��������� � ������������i�, ��� � : 11" << endl;
        cout << "����i� ��������� � �� : 43/44" << endl;
        break;
    case 31:
        cout << "����i� ��������� � ������������i�, ��� � : 12" << endl;
        cout << "����i� ��������� � �� : 45/46" << endl;
        break;
    }
    return sizeUkr;
}
int validationForBinary(){
    int i = 0;
    while (!(cin >> i)) {
        cout << "����i�� �����: ";
        cin.clear();
        fflush(stdin);
    }
    while(i < 0 || i == 0 || i > 7483650) {
        if(i < 0 || i == 0 || i > 7483650) {
            cout << "����� ������� ���� �i���� 0 �� ����� 7483650: ";
            cin.clear();
            fflush(stdin);
        }
        i = validationForBinary();
    }
    return i;
}
void binarySystem()
{
    cout << "����i�� ����� �i� 0 �� 7483650: ";
    string str = "";
    int num1 = 0, i = 0, counterNull = 0, counterOne = 0, num2 = 0;
    num1 = validationForBinary();
    while (num1) {
        num2 = num1 % 2;
        num1 = num1 / 2;
        str = to_string(num2) + str;
    }
    cout << str << endl;
    while (str[i]) {
        if(str[i] == '0')
            counterNull++;
        else if(str[i] == '1')
            counterOne++;
        i++;
    }
    cout << "0 �i�: " << str[str.length() - 1] << endl;
    if (str[str.length() - 1] == '0') {
        cout << "�i���i��� 0: " << counterNull << endl;
    }
    else {
        cout << "�i���i��� 1: " << counterOne << endl;
    }
}

#endif // MODULESKARPIKOV_H

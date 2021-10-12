#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <windows.h>


void setLocalUtf_8(){
    // the procedure configures the console window to work with utf-8 encoding
    _wsetlocale(LC_ALL,L"");
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
}
void devInfo(){
    // the devInfo () procedure displays information about the application and developer of this listing
    wprintf(L"╔═════════════════════════════════════════════════════════════════════════════════════════╗\n");
    wprintf(L"║Користувач вводить 15 чисел. Застосунок виводить числа у зворотньому порядку та кількість║\n");
    wprintf(L"║чисел більших за 3.50 і менших за 150,02.                                                ║\n");
    wprintf(L"║Виконав студент групи КБ20 Карпіков Олег Сергійович                                      ║\n");
    wprintf(L"╚═════════════════════════════════════════════════════════════════════════════════════════╝\n");
}
int main()
{
    wchar_t resultDialog;
    setLocalUtf_8();
    do{
        system("cls");
        devInfo();

        double arrayNumber[15];
        int countNumber = 0;
        for(char i = 0; i < 15; i++)
        {
            wprintf(L"Введіть %d число масиву: ", i+1);
            wscanf(L"%lf", &arrayNumber[i]);
        }
        wprintf(L"Введені числа у зворотньому порядку: ");

        for(char i = 14; i > -1; i--)
        {

            wprintf(L"%lf", arrayNumber[i]);
            if(i > 0)
            {
                wprintf(L", ");
            }else{
                wprintf(L".\n");
            }
            if(arrayNumber[i]>3.50 && arrayNumber[i] < 150.02)
            {
                countNumber++;
            }
        }
        wprintf(L"Кількістть чисел у діапазоні (3,50;150,02): %d\n", countNumber);

        wprintf(L"Повторити виконання програми? (Y/N): ");
        getwchar();
        wscanf(L"%lC", &resultDialog);
    }while( resultDialog == L'Y'|| resultDialog == L'y');
    return 0;
}

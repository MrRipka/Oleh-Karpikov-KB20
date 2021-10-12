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
    wprintf(L"╔═══════════════════════════════════════════════════════════════════════════════════════╗\n");
    wprintf(L"║Користувач вводить речення (українською або англійською мовою), яке закінчується       ║\n");
    wprintf(L"║на \".\"  або \"...\". Застосунок виводить повідомлення чи є у введеному реченні,          ║\n");
    wprintf(L"║слово \"масив\".                                                                         ║\n");
    wprintf(L"║Виконав студент групи КБ20 Карпіков Олег Сергійович                                    ║\n");
    wprintf(L"╚═══════════════════════════════════════════════════════════════════════════════════════╝\n");
}

void pressAnyKey(){
    // A procedure that does not close the console window until any key on the keyboard is pressed.
    // Displays the corresponding system message: Press any key to continue. . .
    wprintf(L"\n");
    system("pause");
}


int main(){
    setLocalUtf_8();
    devInfo();
    wchar_t userStr[1000];
    unsigned long userStrSize = 0;
    wprintf(L"Введіть речення: ");

    // read userStr in utf-8
    ReadConsole(GetStdHandle(STD_INPUT_HANDLE), userStr, 1000,&userStrSize, NULL);
    userStrSize -= 3;

    // Remove "extra" spaces at the end of a sentence
    while(userStr[userStrSize]==L' ')
    {
        userStrSize--;
    }

    // Convert characters to one case
    for(long currentLetter = 0; currentLetter <= (long)(userStrSize); currentLetter++){
        if((userStr[currentLetter] >= L'a' && userStr[currentLetter] <= 'z') || (userStr[currentLetter] >= L'а' && userStr[currentLetter] <= L'я'))
        {
            userStr[currentLetter] += L'А' - L'а';

        }
    }

    // Сheck the last character of the line. If the last character does not match the condition of the task,
    // then the corresponding message will be displayed: The entered sentence does not correspond to the condition of the problem !!!
    if ( userStr[userStrSize] == L'.')
    {


        // Check the presence of the word "array" in the sentence
        if (wcsstr(userStr,L"МАСИВ") || wcsstr(userStr,L"ARRAY"))
        {

            wprintf(L"Cлово \"масив\" присутнє у введеному речені!");
        }else{
            wprintf(L"Cлова \"масив\" немає у введеному речені!");
        }
    }else{
        wprintf(L"Введене речення не відповідає умові задачі!!!");
    }


    pressAnyKey();
    return 0;
}

#include <iostream>
#include "loading.h"
// #include <fstream>
// #include <string>
#include <windows.h>
// #include <conio.h>
void loading(){
	system("color 0A");

    char a = 177, b = 219;

    std::cout << "\n\t\t\t\t\t\tLoading...\n\n";
    std::cout << "\t\t\t\t\t";

    for (int i = 0; i < 26; i++)
        std::cout << a;

    std::cout << "\r";
    std::cout << "\t\t\t\t\t";

    for (int i = 0; i < 26; i++)
    {
        std::cout << b;
        Sleep(100);
    }
    std::cout << "\nDa load xong!!!";
    Sleep(500);

    system("cls");
    std::cout << std::endl;
    system("color F");
}


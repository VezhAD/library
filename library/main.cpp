#include <iostream>
#include<Windows.h>
#include "Menu.hpp"

void hello()
{
    std::cout << "Привет!\n";
}

void exitProgram()
{
    std::cout << "Выход...\n";
}

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    Menu menu;

    menu.addItem("Приветствие", hello);
    menu.addItem("Выход", exitProgram);

    while (true)
    {
        menu.show();

        int choice = menu.choose();

        if (choice == 2)
            break;

        menu.execute(choice);
    }

    return 0;
}
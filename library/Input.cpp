#include "Input.hpp"
#include <iostream>

std::string Input::getString(const std::string& text)
{
    std::string value;
    std::cout << text;
    std::getline(std::cin, value);
    return value;
}

int Input::getInt(const std::string& text)
{
    int value;

    while (true)
    {
        std::cout << text;

        if (std::cin >> value)
            return value;

        std::cin.clear();
        std::cin.ignore(10000, '\n');

        std::cout << "Ошибка ввода. Попробуйте снова.\n";
    }
}
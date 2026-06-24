#include <cassert>
#include <iostream>
#include <Windows.h>
#include "Menu.hpp"

// тест 1: создание меню
void testMenuCreate()
{
    Menu menu;
    assert(menu.size() == 0);
}

// тест 2: добавление пункта
void testAddItem()
{
    Menu menu;
    menu.addItem("Test", []() {});
    assert(menu.size() == 1);
}

// тест 3: несколько пунктов
void testMultipleItems()
{
    Menu menu;
    menu.addItem("A", []() {});
    menu.addItem("B", []() {});
    menu.addItem("C", []() {});

    assert(menu.size() == 3);
}

//int main()
//{
//    SetConsoleCP(CP_UTF8);
//    SetConsoleOutputCP(CP_UTF8);
//    std::cout << "Запуск тестов...\n";
//
//    testMenuCreate();
//    testAddItem();
//    testMultipleItems();
//
//    std::cout << "Все тесты прошли успешно!\n";
//
//    return 0;
//}
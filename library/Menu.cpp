#include "Menu.hpp"
#include <iostream>

void Menu::addItem(const std::string& title, std::function<void()> action)
{
    items.emplace_back(title, action);
}

void Menu::show()
{
    for (size_t i = 0; i < items.size(); i++)
    {
        std::cout << i + 1 << ". " << items[i].getTitle() << std::endl;
    }
}

int Menu::choose()
{
    int choice;
    std::cin >> choice;
    return choice;
}

void Menu::execute(int index)
{
    items[index - 1].execute();
}

int Menu::size() const
{
    return items.size();
}
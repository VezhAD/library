#pragma once
#include <vector>
#include "MenuItem.hpp"

class Menu
{
private:
    std::vector<MenuItem> items;

public:
    void addItem(const std::string& title, std::function<void()> action);

    void show();

    int choose();

    void execute(int index);

    int size() const;
};
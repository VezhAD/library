#include "MenuItem.hpp"

MenuItem::MenuItem(const std::string& title, std::function<void()> action)
{
    this->title = title;
    this->action = action;
}

void MenuItem::execute()
{
    action();
}

std::string MenuItem::getTitle() const
{
    return title;
}
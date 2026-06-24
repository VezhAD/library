#pragma once
#include <string>
#include <functional>

class MenuItem
{
private:
    std::string title;
    std::function<void()> action;

public:
    MenuItem(const std::string& title, std::function<void()> action);

    void execute();
    std::string getTitle() const;
};
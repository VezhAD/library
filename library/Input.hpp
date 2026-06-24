#pragma once
#include <string>

class Input
{
public:
    static std::string getString(const std::string& text);
    static int getInt(const std::string& text);
};
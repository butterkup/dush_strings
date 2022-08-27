#include "strings.hpp"
#include <iostream>

int main()
{
    std::string name = "simon nganga njoroge";
    std::cout << "Capitalize Name : " << theedushbag::strings::capitalize(name) << '\n';
    std::cout << "NAME : " << theedushbag::strings::uppercase(name) << '\n';
    std::cout << "count 'n' in name : " << theedushbag::strings::count('n', name) << '\n';
    std::cout << "Title Name : " << theedushbag::strings::title(name) << '\n\n';
    std::cout << "Other useful string Functions are : \n";
    for (std::string &funcName : theedushbag::strings::all)
        std::cout << '\t' << funcName << '\n';
}
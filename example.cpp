#include "strings.hpp"
#include <iostream>

int main()
{
    std::string name = "simon nganga njoroge";
    std::cout << "Capitalize Name : " << snn::strings::capitalize(name) << '\n';
    std::cout << "NAME : " << snn::strings::uppercase(name) << '\n';
    std::cout << "count 'n' in name : " << snn::strings::count('n', name) << '\n';
    std::cout << "Title Name : " << snn::strings::title(name) << '\n\n';
    std::cout << "Other useful string Functions are : \n";
    for (std::string &funcName : snn::strings::all)
        std::cout << '\t' << funcName << '\n';
}
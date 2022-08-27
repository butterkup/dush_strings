# cmonstring
Helps manipulate strings better in c++

# Example:
c++```
#include "theedushbag/strings.hpp"
#include <iostream>
 
int main()
{
    std::string name = "simon nganga njoroge";
    theedushbag::strings::capitalize(name);
    std::cout << "Name : " << name << '\n';
    return 0;
}
```

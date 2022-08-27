## theedushbag
:smiley: Hello There, this repository is dedicated to creating simple c++ files to help/ease moving around c++ for begginers, consider strings.hpp
for manipulating string in c++.
Helps manipulate strings better in c++

# Example:
```cpp
#include "theedushbag/strings.hpp"
#include <iostream>
 
int main()
{
    std::string name = "simon nganga njoroge";
    theedushbag::strings::title(name);
    std::cout << "Name : " << name << '\n';
    return 0;
}
```

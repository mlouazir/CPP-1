#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";

    std::string *stringPTR = &str;

    std::string& stringREF = str;

    std::cout << "STR variable address :" << &str << '\n';

    std::cout << "stringPTR variable address :" << stringPTR << '\n';

    std::cout << "stringREF variable address :" << stringREF << '\n';

    std::cout << "STR variable value :" << str << '\n';

    std::cout << "stringPTR variable value :" << *stringPTR << '\n';

    std::cout << "stringREF variable value :" << stringREF << '\n';

    return 0;
}

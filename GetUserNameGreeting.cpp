#include <iostream>
#include <string>

int main() 
{
    std::string userName;

    std::cout << "Enter your name: ";
    std::cin >> userName;
    std::cout << "Hello, " << userName << "! Welcome to CIT-66" << '\n';

    return 0;
}

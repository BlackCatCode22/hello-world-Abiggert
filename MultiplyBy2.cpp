#include <iostream>

int main()
{
    std::cout << "Enter an Integer: ";

    int num{ };
    std::cin >> num;

    std::cout << "Multiplied by two that number is: " << num * 2 << '\n';
    return 0;
}

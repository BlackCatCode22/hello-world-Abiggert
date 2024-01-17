#include <iostream>

int main()
{
    std::cout << "Give Me A Number: ";
    int x{};
    std::cin >> x;

    std::cout << "Give Me Another Number: ";
    int y{};
    std::cin >> y;

    std::cout << x << " + " << y << " is " << x + y << ".\n";

    return 0;
}

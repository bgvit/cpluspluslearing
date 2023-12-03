#include <iostream>

int main() {
    std::cout << "Diga um número: "; // ask user for a number

    int x{};       // define variable x to hold user input (and value-initialize it)
    std::cin >> x; // get number from keyboard and store it in variable x

    std::cout << "Você colocou o número: " << x << '\n';
    return 0;
}

#include <iostream>
#include "MyOOR.h"

int fibonacci(int number) {
    if (number == 0 || number == 1)
        return 1;
    return fibonacci(number - 1) + fibonacci(number - 2);
}

int main() {
    int n;
    std::cout << "Type Number: ";
    std::cin >> n;

    try {
        std::cout << fibonacci(n) << std::endl;
    } catch(const std::out_of_range& err) {
        throw MyOOR();
    }

}
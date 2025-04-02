#include <iostream>
bool isEven(int number) {
    return number % 2 == 0;
}

int main() {
    int number;
    std::cout << "vvedite chislo: ";
    std::cin >> number;
    if (isEven(number)) {
        std::cout << number << "chetnoe ";
    }
    else {
        std::cout << number << "nechetnoe ";
    }

    return 0;
}
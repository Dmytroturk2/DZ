#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0));

    unsigned int arr[20];
    for (int i = 0; i < 20; ++i) {
        arr[i] = std::rand() % 100;
    }

    std::cout << "Array: ";
    for (int i = 0; i < 20; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";

    unsigned int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    std::cout << "Numbers greater than " << num << ":\n";
    for (int i = 0; i < 20; ++i) {
        if (arr[i] > num) {
            std::cout << arr[i] << " ";
        }
    }
    std::cout << "\n";

    return 0;
}
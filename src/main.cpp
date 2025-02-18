#include <iostream>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);

int main() {
    int a = 10;
    int b = 3;

    std::cout << "changed !! adding: " << add(a, b) << std::endl;
    std::cout << "changed !! substracting: " << subtract(a, b) << std::endl;
    std::cout << "multiplying: " << multiply(a, b) << std::endl;

    return 0;
}

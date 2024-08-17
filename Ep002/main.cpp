#include <iostream>
#include <concepts>

template <typename T>
requires std::integral<T>
T add(T a, T b) {
    return a + b;
}

int main() {
    std::cout << "hello world" << std::endl;
    std::cout << add(5, 7) << std::endl;
    return 0;
}
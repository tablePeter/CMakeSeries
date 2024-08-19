#include <iostream>
#include <vector>
#include "stats.h"

int main(int argc, char** argv) {
    std::vector<int> v {3,5,6,12,7};
    int avg = mean(v.data(), v.size());
    std::cout << "mean: " << avg << std::endl;
    return 0;
}
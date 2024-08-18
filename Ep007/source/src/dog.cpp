#include "dog.h"
#include <iostream>

Dog::Dog(std::string name_param): dog_name(name_param) {
    std::cout << "constructor for dog" << dog_name << " called." << std::endl;
}

Dog::~Dog() {
    std::cout << "destructor for dog" << dog_name << " called." << std::endl;
}
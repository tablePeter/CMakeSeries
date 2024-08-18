#include <iostream>
#include <dog.h>
#include <log.h>
#include <operations.h>

int main() {
	auto value = ((10<=>10) > 0);
	std::cout << std::boolalpha;
	std::cout << "value: " << value << std::endl;

	double result = add(10, 90);
	std::cout << "result: " << result << std::endl;

	Dog dog("mydog");
	dog.print_info();
	log_data("hello there", LogType::FATAL_ERROR);

	return 0;
}
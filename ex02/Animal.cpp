#include "./Animal.hpp"
#include <iostream>
#include <cstdlib>

Animal::Animal() {
	type = "(Animal)";
	std::cout << "[INFO]:(Default Construction){Animal}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}
Animal::Animal(const std::string &param) {
	type = param;
	std::cout << "[INFO]:(Parameterized Construction){Animal}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}

Animal::Animal(const Animal &param) {
	type = param.getType();
	std::cout << "[INFO]:(Copy Construction){Animal}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}

Animal::~Animal(void) {
	std::cout << "[INFO]:(Destruction){Animal}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}

void	Animal::operator=(const Animal &param) {
	if (&param == this)
		return ;
	type = param.getType();
	std::cout << "[INFO]:( <=> Operator overloading){Animal}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}

const std::string	Animal::getType(void) const{
	return (type);
}
void	Animal::setType(const std::string &param) {
	type = param;
}

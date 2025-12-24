#include "./Dog.hpp"
#include <iostream>
#include <cstdlib>

Dog::Dog() {
	type = "(Dog)";
	std::cout << "[INFO]:(Default Construction){Dog}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}
Dog::Dog(const std::string &param) {
	type = param;
	std::cout << "[INFO]:(Parameterized Construction){Dog}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}

Dog::Dog(const Animal &param) {
	type = param.getType();
	std::cout << "[INFO]:(Copy Construction){Dog}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}

Dog::~Dog(void) {
	std::cout << "[INFO]:(Destruction){Dog}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}

void	Dog::operator=(const Dog &param) {
	type = param.getType();
	std::cout << "[INFO]:( <=> Operator overloading){Dog}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}

void	Dog::makeSound(void) {
	std::cout << "[INFO]:(Dog Make Sound){Howww !}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}

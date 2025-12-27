#include "./Dog.hpp"
#include <iostream>
#include <cstdlib>

Dog::Dog() {
	type = "(Dog)";
	brain = new Brain();
	std::cout << "[INFO]:(Default Construction){Dog}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}
Dog::Dog(const std::string &param) {
	type = param;
	brain = new Brain();
	std::cout << "[INFO]:(Parameterized Construction){Dog}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}

Dog::Dog(const Animal &param) {
	type = param.getType();
	std::cout << "[INFO::(Copy Construction){Dog}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}

Dog::~Dog(void) {
	delete brain;
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

void	Dog::makeSound(void) const {
	std::cout << "[INFO]:(Dog Make Sound){Howww !}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}


Brain	*Dog::getBrain(void) const {
	return (brain);
}

void	Dog::setBrain(Brain *param) {
	brain = param;
}

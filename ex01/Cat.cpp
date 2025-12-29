#include "./Cat.hpp"
#include <iostream>
#include <cstdlib>

Cat::Cat() {
	type = "(Cat)";
	brain = new Brain();
	std::cout << "[INFO]:(Default Construction){Cat}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}
Cat::Cat(const std::string &param) {
	type = param;
	brain = new Brain();
	std::cout << "[INFO]:(Parameterized Construction){Cat}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}

Cat::Cat(const Cat &param) {
	type = param.getType();
	brain = new Brain();
	std::cout << "[INFO]:(Copy Construction){Cat}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}

Cat::~Cat(void) {
	delete brain;
	std::cout << "[INFO]:(Destruction){Cat}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}

void	Cat::operator=(const Cat &param) {
	if (&param != this)
		return ;
	type = param.getType();
	std::cout << "[INFO]:( <=> Operator overloading){Cat}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}

void	Cat::makeSound(void) const {
	std::cout << "[INFO]:(Cat Make Sound){Meowwwwww !}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}

Brain	*Cat::getBrain(void) const {
	return (brain);
}

void	Cat::setBrain(Brain *param) {
	brain = param;
}

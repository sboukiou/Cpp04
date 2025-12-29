#include "./WrongCat.hpp"
#include <iostream>
#include <cstdlib>

WrongCat::WrongCat() {
	type = "(WrongCat)";
	std::cout << "[INFO]:(Default Construction){WrongCat}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}
WrongCat::WrongCat(const std::string &param) {
	type = param;
	std::cout << "[INFO]:(Parameterized Construction){WrongCat}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}

WrongCat::WrongCat(const WrongAnimal &param) {
	type = param.getType();
	std::cout << "[INFO]:(Copy Construction){WrongCat}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}

WrongCat::~WrongCat(void) {
	std::cout << "[INFO]:(Destruction){WrongCat}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}

void	WrongCat::operator=(const WrongCat &param) {
	if (&param == this)
		return ;
	type = param.getType();
	std::cout << "[INFO]:( <=> Operator overloading){WrongCat}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}

void	WrongCat::makeSound(void) const {
	std::cout << "[INFO]:(WrongCat Make Sound){Meowwwwww !}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}

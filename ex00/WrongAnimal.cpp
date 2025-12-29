#include "./WrongAnimal.hpp"
#include <iostream>
#include <cstdlib>

WrongAnimal::WrongAnimal() {
	type = "(WrongAnimal)";
	std::cout << "[INFO]:(Default Construction){WrongAnimal}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}
WrongAnimal::WrongAnimal(const std::string &param) {
	type = param;
	std::cout << "[INFO]:(Parameterized Construction){WrongAnimal}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}

WrongAnimal::WrongAnimal(const WrongAnimal &param) {
	type = param.getType();
	std::cout << "[INFO]:(Copy Construction){WrongAnimal}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "[INFO]:(Destruction){WrongAnimal}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}

void	WrongAnimal::operator=(const WrongAnimal &param) {
	if (&param == this)
		return ;
	type = param.getType();
	std::cout << "[INFO]:( <=> Operator overloading){WrongAnimal}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}

const std::string	WrongAnimal::getType(void) const{
	return (type);
}
void	WrongAnimal::setType(const std::string &param) {
	type = param;
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "[INFO]:(Make Sound){Default WrongAnimal wont make any}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}

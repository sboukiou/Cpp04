#include "./Ice.hpp"
#include "./ICharacter.hpp"
#include <iostream>
#include <cstdlib>

Ice::Ice(void): AMateria("ice") {
	std::cout << "[INFO]:(Default Construction){Ice}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}

Ice::Ice(const std::string &param): AMateria("ice") {
	type = param;
	std::cout << "[INFO]:(Parameterized Construction){Ice}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}

Ice::Ice(const Ice &other): AMateria(other) {
	if (&other == this)
		return ;
	std::cout << "[INFO]:(Copy Construction){Ice}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}

Ice::~Ice(void) {
	std::cout << "[INFO]:(Destruction){Ice}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}

void Ice::operator=(const Ice &other) {
	if (&other == this)
		return ;
	std::cout << "[INFO]:(Assignment operator){Ice}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}

Ice*	Ice::clone() const {
	return new Ice(*this);
}

void	Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}

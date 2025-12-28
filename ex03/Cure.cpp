#include "./Cure.hpp"
#include "./ICharacter.hpp"
#include <iostream>
#include <cstdlib>

Cure::Cure(void): AMateria("cure") {
	std::cout << "[INFO]:(Default Construction){Cure}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}

Cure::Cure(const std::string &param): AMateria("cure") {
	type = param;
	std::cout << "[INFO]:(Parameterized Construction){Cure}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}

Cure::Cure(const Cure &other): AMateria(other) {
	if (&other == this)
		return ;
	std::cout << "[INFO]:(Copy Construction){Cure}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}

Cure::~Cure(void) {
	std::cout << "[INFO]:(Destruction){Cure}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}

void Cure::operator=(const Cure &other) {
	if (&other == this)
		return ;
	std::cout << "[INFO]:(Assignment operator){Cure}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}

Cure*	Cure::clone() const {
	return new Cure(*this);
}

void	Cure::use(ICharacter& target) {
	std::cout << "* heals " <<target.getName() << "’s wounds *\n";
}

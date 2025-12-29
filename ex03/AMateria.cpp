#include "./AMateria.hpp"
#include <iostream>
#include <cstdlib>


AMateria::AMateria(void) {
	type = "No-TyPe";
	std::cout << "[INFO]:(Default Construction){AMateria}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}

AMateria::AMateria(const std::string &param) {
	type = param;
	std::cout << "[INFO]:(Parameterized Construction){AMateria}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}

AMateria::AMateria(const AMateria &other) {
	type = other.getType();
	std::cout << "[INFO]:(Copy Construction){AMateria}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}

void AMateria::operator=(const AMateria &other) {
	if (&other == this)
		return ;
	type = other.getType();
	std::cout << "[INFO]:(Assignment operator){AMateria}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}


AMateria::~AMateria() {
	std::cout << "[INFO]:(Destruction){AMateria}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}

const std::string &AMateria::getType(void) const {
	return (type);
}

void	AMateria::use(ICharacter &other) {
	(void)other;
}

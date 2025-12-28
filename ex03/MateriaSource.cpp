#include "./MateriaSource.hpp"
#include <iostream>
#include <cstdlib>

MateriaSource::MateriaSource(void) {

	for (int i = 0; i < 4; i += 1)
		learningSlots[i] = NULL;
	std::cout << "[INFO]:(Default Constructor){MateriaSource}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}

MateriaSource::MateriaSource(const MateriaSource &other) {

	for (int i = 0; i < 4; i += 1)
		learningSlots[i] = other.learningSlots[i]->clone();
	std::cout << "[INFO]:(Copy Constructor){MateriaSource}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}

void MateriaSource::operator=(const MateriaSource &other) {

	for (int i = 0; i < 4; i += 1)
		learningSlots[i] = other.learningSlots[i]->clone();
	std::cout << "[INFO]:(Assignment opeartor){MateriaSource}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}

MateriaSource::~MateriaSource(void) {

	for (int i = 0; i < 4; i += 1)
		delete learningSlots[i];
	std::cout << "[INFO]:(Destruction){MateriaSource}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}

void	MateriaSource::learnMateria(AMateria *param) {
	for (int i = 0; i < 4; i += 1) {
		if (learningSlots[i] == NULL) {
			learningSlots[i] = param;
			return ;
		}
	}
	std::cout << "[ERR]:(learnMateria){learningSlots full}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}

AMateria*	MateriaSource::createMateria(std::string const &param) {
	for (int i = 0; i < 4; i += 1) {
		if (learningSlots[i] != NULL) {
			if (learningSlots[i]->getType() == param)
				return (learningSlots[i]->clone());
		}
	}
	std::cout << "[ERR]:(createMateria){ Type not found }\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
	return (NULL);
}

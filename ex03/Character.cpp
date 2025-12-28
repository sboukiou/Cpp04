#include "./Character.hpp"
#include <iostream>
#include <cstdlib>

Character::Character(void) {
	name = "No-Name";
	for (int i = 0; i < 4; i += 1)
		slots[i] = NULL;
	std::cout << "[INFO]:(Default Construction){Character}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}

}

Character::Character(std::string param) {
	name = param;
	for (int i = 0; i < 4; i += 1)
		slots[i] = NULL;
	std::cout << "[INFO]:(Parameterized Construction){Character}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}

}

Character::Character(const Character &other) {
	if (&other == this)
		return ;
	name = other.name;
	for (int i = 0; i < 4; i += 1) {
		slots[i] = NULL;
		slots[i] = other.slots[i]->clone();
	}
	std::cout << "[INFO]:(Copy Construction){Character}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}

}


Character::~Character(void) {
	std::cout << "[INFO]:(Destructor){Character}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
	for (size_t i = 0; i < 4; i += 1)
		delete slots[i];
}

void	Character::operator=(const Character &other) {
	if (&other == this)
		return ;
	name = other.name;
	for (int i = 0; i < 4; i += 1) {
		delete slots[i];
		slots[i] = other.slots[i]->clone();
	}
	std::cout << "[INFO]:(Assignment operator){Character}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}

std::string const	&Character::getName() const {
	return (name);
}

void	Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i += 1) {
		if (slots[i] == NULL) {
			slots[i] = m;
			return ;
		}
	}
	std::cout << "[ERR]:(EQUIP){Slots full}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
};
void	Character::unequip(int idx) {
	if (idx < 0 || idx > 3) {
		std::cout << "[ERR]:(UNEQUIP){WRONG idx}\n";
		if (std::cout.fail()) {
			std::cerr << "[ERR]: (Failed to write to stdout)\n";
			exit(0);
		}
	}
	if (slots[idx])
		slots[idx] = NULL;

}
void	Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx > 3) {
		std::cout << "[ERR]:(UNEQUIP){WRONG idx}\n";
		if (std::cout.fail()) {
			std::cerr << "[ERR]: (Failed to write to stdout)\n";
			exit(0);
		}
	}
	if (slots[idx])
		slots[idx]->use(target);
}

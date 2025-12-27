#include "./Brain.hpp"
#include <iostream>
#include <cstdlib>


Brain::Brain(void) {
	ideas = new std::string[IDEAS_COUNT](); // Added parentheses to initialize memory
	size = 0;
	if (ideas == NULL) {
		std::cerr << "[ERR]: Failed to allocate the ideas!\n";
		exit(FAIL);
	}
	std::cout << "[INFO]:(Default Construction){Brain}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}

Brain::Brain(std::string *param, size_t i) {
	if (param == NULL) {
		std::cerr << "[ERR]: ideas provided are null!\n";
		return ;
	}
	ideas = new std::string[IDEAS_COUNT](); // Added parentheses to initialize memory
	if (ideas == NULL) {
		std::cerr << "[ERR]: Failed to allocate the ideas!\n";
		exit(FAIL);
	}
	size = i;
	for (size_t j = 0; j < size; j += 1) {
			ideas[j] = param[j];
			j += 1;
	}
	std::cout << "[INFO]:(Parameterized Construction){Brain}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}

Brain::Brain(const Brain &other) {
	std::string	*Copy;
	if (other.getIdeas() == NULL) {
		std::cerr << "[WARN]: ideas in the provided object are null!\n";
	}
	ideas = new std::string[IDEAS_COUNT]();
	Copy = other.getIdeas();
	size = other.getSize();
	for (size_t i = 0; i < size; i += 1) {
			ideas[i] = Copy[i];
			i += 1;
	}
	std::cout << "[INFO]:(Copy Construction){Brain}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}

Brain::~Brain(void) {
	if (ideas != NULL)
		delete [] ideas;
	std::cout << "[INFO]:(Destruction){Animal}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}

void	Brain::operator=(const Brain &other) {
	if (other.getIdeas() != NULL)
		delete ideas;
	if (other.getIdeas() == NULL) {
		std::cerr << "[ERR]: ideas provided are null!\n";
		return ;
	}
	ideas = other.getIdeas();
	std::cout << "[INFO]:(Assignment operator){Brain}\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: (Failed to write to stdout)\n";
		exit(0);
	}
}

std::string	*Brain::getIdeas(void) const {
	return (ideas);
}

void	Brain::setIdeas(std::string *param) {
	ideas = param;
}

size_t	Brain::getSize(void) const {
	return (size);
}
void	Brain::setSize(size_t i) {
	size = i;
}

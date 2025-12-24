#include "./Animal.hpp"
#include <iostream>

void	testAnimalClass(void) {
	std::cout << "----------------\n";
	std::cout <<  "Testing the Animal Class\n";
	std::cout << "----------------\n";
	Animal *unknown = new Animal;
	Animal *Dinosaur = new Animal("T-rex");
	Animal *ChildDino = new Animal(*Dinosaur);

	ChildDino->setType("Mini-T-Rex");

	unknown->makeSound();
	Dinosaur->makeSound();
	ChildDino->makeSound();
	delete unknown;
	delete Dinosaur;
	delete ChildDino;
	std::cout << "----------------\n\n";
}

int	main(void) {
	testAnimalClass();
	return (0);
}

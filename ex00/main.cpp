#include "./Animal.hpp"
#include "./Cat.hpp"
#include "./Dog.hpp"
#include <iostream>

void	testAnimalClass(void) {
	std::cout << "----------------\n";
	std::cout <<  "Testing the Animal Class\n";
	std::cout << "----------------\n";
	Animal *regularAnimal = new Animal;
	Animal *pseudoAnimal = new Animal("T-rex");
	Animal *HolyAnimal = new Animal(*pseudoAnimal);

	pseudoAnimal->setType("Mini-T-Rex");

	regularAnimal->makeSound();
	HolyAnimal->makeSound();
	pseudoAnimal->makeSound();
	delete regularAnimal;
	delete HolyAnimal;
	delete pseudoAnimal;
	std::cout << "----------------\n\n";
}

void	testCatClass(void) {
	std::cout << "----------------\n";
	std::cout <<  "Testing the Cat Class\n";
	std::cout << "----------------\n";
	Animal *unknown = new Cat;
	Animal *Dinosaur = new Cat("T-rex");
	Animal *ChildDino = new Cat(*Dinosaur);

	ChildDino->setType("Mini-T-Rex");

	unknown->makeSound();
	Dinosaur->makeSound();
	ChildDino->makeSound();
	delete unknown;
	delete Dinosaur;
	delete ChildDino;
	std::cout << "----------------\n\n";
}

void	testDogClass(void) {
	std::cout << "----------------\n";
	std::cout <<  "Testing the Dog Class\n";
	std::cout << "----------------\n";
	Animal *unknown = new Dog;
	Animal *Dinosaur = new Dog("T-rex");
	Animal *ChildDino = new Dog(*Dinosaur);

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
	std::cout << "----------------\n\n";
	testCatClass();
	std::cout << "----------------\n\n";
	testDogClass();
	std::cout << "----------------\n\n";


	std::cout << "----------------\n\n";
	std::cout << "Subject presented tests\n\n";
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
	
	return (0);
}

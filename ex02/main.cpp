#include "./Animal.hpp"
#include "./Cat.hpp"
#include "./Dog.hpp"
#include "./Brain.hpp"
#include <iostream>

void	testCatClass(void) {
	std::cout << "----------------\n";
	std::cout <<  "Testing the Cat Class\n";
	std::cout << "----------------\n";
	Animal *unknown = new Cat;
	Animal *Bob = new Cat("T-rex");
	Cat *lilBob = new Cat("Bob");

	lilBob->setType("Mini-T-Rex");

	unknown->makeSound();
	Bob->makeSound();
	lilBob->makeSound();
	delete unknown;
	delete Bob;
	delete lilBob;
	std::cout << "----------------\n\n";
}

void	testDogClass(void) {
	std::cout << "----------------\n";
	std::cout <<  "Testing the Dog Class\n";
	std::cout << "----------------\n";
	Animal *unknown = new Dog;
	Animal *Bob = new Dog("T-rex");
	Dog *lilBob = new Dog();

	lilBob->setType("Mini-T-Rex");

	unknown->makeSound();
	Bob->makeSound();
	lilBob->makeSound();
	delete unknown;
	delete Bob;
	delete lilBob;
	std::cout << "----------------\n\n";
}

void	testBrain() {
	std::cout << "----------------\n";
	std::cout <<  "Testing the Brain Class\n";
	std::cout << "----------------\n";
	std::string staticIdeas = "No idea actually";
	Brain *Brain00 = new Brain();
	Brain *Brain01 = new Brain(&staticIdeas, 1);
	Brain *Brain02 = new Brain(*Brain00);

	std::cout << "\n----Destroying Brains----\n";
	delete Brain00;
	delete Brain01;
	delete Brain02;
	std::cout << "----------------\n\n";
}

void	testMixed(void) {
	std::cout << "-------- TEST MIXED -----\n";
	Dog Basic = Dog();
	{
		Dog tmp = Basic;
	}
	std::cout << Basic.getBrain()->getSize() << std::endl;

}

# define ZOO_SIZE 5

void	requiredTest() {
	Animal **Zoo = new Animal*[ZOO_SIZE];
	for (size_t i = 0; i < ZOO_SIZE; i += 1) {
		if (i % 2)
			Zoo[i] = new Cat();
		else
			Zoo[i] = new Dog();
		Zoo[i]->makeSound();
	}
	for (size_t i = 0; i < ZOO_SIZE; i += 1)
		delete Zoo[i];
	delete [] Zoo;
}

int	main(void) {
	std::cout << "----------------\n\n";
	testCatClass();
	std::cout << "----------------\n\n";
	testDogClass();
	std::cout << "----------------\n\n";
	requiredTest();
	testMixed();


	testBrain();
	std::cout << "----------------\n\n";
	
	return (0);
}

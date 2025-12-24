#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal {
	public:
		Dog();
		Dog(const std::string &param);
		Dog(const Animal &param);
		~Dog();
		void				operator=(const Dog &param);
		void				makeSound(void);
};

#endif

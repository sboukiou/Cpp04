#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

/**
 * Implementation of the Dog class
 *
 * Derived from the Animal Class
 * with same properties and overrides
 * the makeSound() virtual method
 */

class Dog: public Animal {
	public:
		Dog();
		Dog(const std::string &param);
		Dog(const Animal &param);
		~Dog();
		void				operator=(const Dog &param);
		void				makeSound(void) const;
};

#endif

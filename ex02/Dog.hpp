#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

/**
 * Implementation of the Dog class
 *
 * Derived from the Animal Class
 * with same properties and overrides
 * the makeSound() virtual method
 */

class Dog: public Animal {
	private:
		Brain *brain;
	public:
		Dog();
		Dog(const std::string &param);
		Dog(const Dog &param);
		~Dog();
		void				operator=(const Dog &param);
		void				makeSound(void) const;
		Brain				*getBrain(void) const ;
		void				setBrain(Brain *param);
};

#endif

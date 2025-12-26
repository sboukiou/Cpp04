#ifndef CAT_HPP
# define CAT_HPP

/**
 * Implementation of the Cat class
 *
 * Derived from the Animal Class
 * with same properties and overrides
 * the makeSound() virtual method
 */

#include "Animal.hpp"

class Cat: public Animal {
	public:
		Cat();
		Cat(const std::string &param);
		Cat(const Animal &param);
		~Cat();
		void				operator=(const Cat &param);
		void				makeSound(void) const;
};

#endif

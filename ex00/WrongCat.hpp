#ifndef W_CAT_HPP
# define W_CAT_HPP

/**
 * Implementation of the Cat class
 *
 * Derived from the Animal Class
 * with same properties and overrides
 * the makeSound() virtual method
 */

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {
	public:
		WrongCat();
		WrongCat(const std::string &param);
		WrongCat(const WrongAnimal &param);
		~WrongCat();
		void				operator=(const WrongCat &param);
		void				makeSound(void) const;
};

#endif

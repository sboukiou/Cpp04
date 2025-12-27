#ifndef CAT_HPP
# define CAT_HPP

#include "Brain.hpp"
#include "Animal.hpp"

/**
 * Implementation of the Cat class
 *
 * Derived from the Animal Class
 * with same properties and overrides
 * the makeSound() virtual method
 */

class Cat: public Animal {
	private:
		Brain *brain;
	public:
		Cat();
		Cat(const std::string &param);
		Cat(const Cat &param);
		~Cat();
		void				operator=(const Cat &param);
		void				makeSound(void) const;
		Brain				*getBrain(void) const ;
		void				setBrain(Brain *param);
};

#endif

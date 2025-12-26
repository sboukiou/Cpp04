#ifndef CAT_HPP
# define CAT_HPP

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

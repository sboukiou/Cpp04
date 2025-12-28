#ifndef ICE_HPP
# define ICE_HPP

#include "./AMateria.hpp"

class Ice: public AMateria {
	public:
		Ice();
		Ice(const std::string &type);
		Ice(const Ice& other);
		~Ice();
		void				operator=(const Ice& other);
		Ice*				clone() const;
		void				use(ICharacter& target);
};

#endif

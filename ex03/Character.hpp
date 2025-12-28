#ifndef CHARACTE_HPP
# define CHARACTE_HPP

#include "./ICharacter.hpp"

class Character: public ICharacter {
	private:
		std::string	name;
		AMateria	*slots[4];
	public:
		Character();
		Character(std::string param);
		Character(const Character &other);
		~Character();
		void	operator=(const Character &other);
		std::string const	&getName() const;
		void				equip(AMateria* m);
		void 				unequip(int idx);
		void 				use(int idx, ICharacter& target);
};

#endif

#include "./IMateriaSource.hpp"
#include "./ICharacter.hpp"

class MateriaSource: public IMateriaSource {
	private:
		AMateria *learningSlots[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &other);
		~MateriaSource();
		void	operator=(const MateriaSource &other);
		void learnMateria(AMateria *param);
		AMateria* createMateria(std::string const &param);
};

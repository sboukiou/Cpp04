#ifndef W_ANIMAL_HPP
# define W_ ANIMAL_HPP

# include <string>

/**
 * Implementation of the WrongAnimal class
 *
 * which serves as a base class for all the other
 * WrongAnimals/specific Classes (Cat, Dog, Duck ....)
 */

class WrongAnimal {
	private:

	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(const std::string &param);
		WrongAnimal(const WrongAnimal &param);
		virtual ~WrongAnimal();
		void				operator=(const WrongAnimal &param);
		void				makeSound(void) const;
		const std::string	getType(void) const;
		void				setType(const std::string &param);
};

#endif

#ifndef ANIMAL_HPP
# define  ANIMAL_HPP

# include <string>

/**
 * Implementation of the Animal class
 *
 * which serves as a base class for all the other
 * Animals/specific Classes (Cat, Dog, Duck ....)
 */

class Animal {
	private:

	protected:
		std::string type;
	public:
		Animal();
		Animal(const std::string &param);
		Animal(const Animal &param);
		virtual ~Animal();
		void				operator=(const Animal &param);
		virtual void				makeSound(void) const = 0;
		const std::string	getType(void) const;
		void				setType(const std::string &param);
};

#endif

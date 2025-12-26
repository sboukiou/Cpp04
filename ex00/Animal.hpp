#ifndef ANIMAL_HPP
# define  ANIMAL_HPP

# include <string>

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
		virtual void				makeSound(void) const;
		const std::string	getType(void) const;
		void				setType(const std::string &param);
};

#endif

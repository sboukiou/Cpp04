#ifndef BRAIN_HPP
# define BRAIN_HPP

# define IDEAS_COUNT 100
# define FAIL 1

#include <string>
class Brain {
	private:
		std::string *ideas;
		size_t		size;
	public:
		Brain();
		Brain(std::string *ideas, size_t i);
		Brain(const Brain &other);
		~Brain();
		void	operator=(const Brain &other);
		std::string	*getIdeas() const;
		void		setIdeas(std::string *param);
		size_t		getSize(void) const;
		void		setSize(size_t param);
};

#endif /* BRAIN_HPP */

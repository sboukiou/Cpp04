#ifndef BRAIN_HPP
# define BRAIN_HPP

# define IDEAS_COUNT 100
# define FAIL 1

#include <string>
class Brain {
	private:
		std::string *ideas;
	public:
		Brain();
		Brain(std::string *ideas);
		Brain(const Brain &other);
		~Brain();
		void	operator=(const Brain &other);
		std::string	*getIdeas() const;
		void		setIdeas(std::string *param);
};

#endif /* BRAIN_HPP */

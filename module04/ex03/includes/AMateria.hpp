#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>

class AMateria {

	protected:

		std::string		_type;


	public:
		
		AMateria(void);
		AMateria(std::string const & type);
		AMateria(AMateria const& cpy);
		virtual ~AMateria(void);

		AMateria&				operator=(AMateria const & src);

		std::string const &		getType() const;

		virtual AMateria*		clone() const = 0;
		virtual void			use(ICharacter& target);


};

#endif
#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {

	public:
		
		Dog(void);
		Dog(Dog const& cpy);
		virtual ~Dog(void);

		Dog&				operator=(Dog const & src);

		virtual void		makeSound() const;
		Brain *				getBrain() const;


	private:

		Brain *		_brain;


};

#endif
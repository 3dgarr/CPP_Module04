#pragma once

#include "./AMateria.hpp"
#include <iostream>

class IMateriaSource
{
	public:
		virtual void 		learnMateria(AMateria*) = 0;
		virtual AMateria*	createMateria(std::string const & type) = 0;
		virtual 			~IMateriaSource() {}
};
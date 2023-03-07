# pragma once 

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public :
		void 		learnMateria(AMateria*);
		AMateria*	createMateria(std::string const & type);

	public :
		MateriaSource();
		MateriaSource(const MateriaSource &);
		MateriaSource &operator=(const MateriaSource &);
		~MateriaSource();

	private :
		AMateria *store[4];
};
#include "./Brain.hpp"

std::string	Brain::getIdeaOfIndex(std::size_t index)
{
	if (index >= MAXIDEAS)
		return (std::string("out of brain"));
	return (ideas[index]);
}

void	Brain::setTheIdea(const std::string& randomIdea)
{
	if (numberOfIdeas >= MAXIDEAS)
		return ;
	ideas[numberOfIdeas++] = randomIdea;
}


Brain::Brain()
	:	MAXIDEAS(100)
{
	for (size_t i = 0; i < MAXIDEAS; i++)
		ideas[i] = "smth";
	numberOfIdeas = 0;


	std::cout << "Default constructor of Brain called" << std::endl; 
}

Brain::Brain(const Brain& rhs)
	:	MAXIDEAS(100)
{
	numberOfIdeas = rhs.numberOfIdeas;
	for (size_t i = 0; i < MAXIDEAS; i++)
		ideas[i] = rhs.ideas[i];

	std::cout << "Copy constructor of Brain called" << std::endl; 
}

Brain&	Brain::operator=(const Brain& rhs)
{
	std::cout << "Copy assignment operator of Brain called" << std::endl; 
	if (this == &rhs)
		return (*this);
	for (size_t i = 0; i < MAXIDEAS; i++)
		ideas[i] = rhs.ideas[i];
	numberOfIdeas = rhs.numberOfIdeas;

	return (*this);
}

Brain::~Brain()
{
	std::cout << "Destructor of Brain called" << std::endl; 
}

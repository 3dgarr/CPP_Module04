#pragma once

#include <iostream>

class Brain
{
	public:
		std::string	getIdeaOfIndex(std::size_t);
		void		setTheIdea(const std::string&);

	public:
        Brain();
        Brain(const Brain&);
        Brain& operator=(const Brain&);
        ~Brain();
	
	private:
		std::string 		ideas[100];
		std::size_t			numberOfIdeas; 
		const std::size_t	MAXIDEAS;
};


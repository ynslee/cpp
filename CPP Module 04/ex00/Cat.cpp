#include "Cat.hpp"

Cat::Cat() : Animal(){
	std::cout << "Constructor for Cat is called 🐈" << std::endl;
	this->_type = "Cat";
}

Cat::~Cat(){
	std::cout << "Destructor for Cat is called 🐈" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other) {
	std::cout << "Copy constructor for Cat is called 🐈" << std::endl;
}

Cat&	Cat::operator=(const Cat &other){
	std::cout << "Cat copy assignment constructor called 🐈" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return *this;
}

void	Cat::makeSound(void) const {
	std::cout << "🐈Purr Purr MEOW🐈" << std::endl;
}

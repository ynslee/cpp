#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon{
	private:
		std::string	_type;
	
	public:
		Weapon(std::string _weapon);
		~Weapon();

		std::string getType() const;
		void	setType(std::string type);
};

#endif
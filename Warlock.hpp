#ifndef WARLOCK_HPP
#define WARLOCK_HPP

# include <iostream>
# include <map>
# include "ATarget.hpp"
# include "ASpell.hpp"

class Warlock {
	private:
		std::string _name;
		std::string _title;
		std::map<std::string, ASpell *> spellMap;
	public:
		Warlock(std::string const &name, std::string const &title);
		~Warlock();

		std::string	const &getName() const;
		std::string	const &getTitle() const;
		void	setTitle(std::string const &title);
		void	introduce() const;
		void	learnSpell(ASpell *spell);
		void	forgetSpell(std::string spell);
		void	launchSpell(std::string spell, ATarget const &target);
};

#endif
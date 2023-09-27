#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title) : _name(name), _title(title) {
	std::cout << _name << ": This looks like another boring day." << std::endl;
}
Warlock::~Warlock() {
	std::cout << _name << ": My job here is done!" << std::endl;
	std::map<std::string, ASpell *>::iterator it = spellMap.begin();

	for (; it != spellMap.end(); ++it)
		delete it->second;
	spellMap.clear();
}

std::string	const &Warlock::getName() const {return this->_name;}
std::string	const &Warlock::getTitle() const {return this->_title;}

void	Warlock::setTitle(std::string const &title) {
	this->_title = title;
}

void	Warlock::introduce() const {
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

void	Warlock::learnSpell(ASpell *spell_ptr) {
	ASpell *tmp = spellMap[spell_ptr->getName()];

	if (tmp)
		spellMap[spell_ptr->getName()] = spell_ptr;
}

void	Warlock::forgetSpell(std::string spell) {
	ASpell *tmp = spellMap[spell];

	if (tmp) {
		spellMap.erase(spell);
		delete tmp;
	}
}

void	Warlock::launchSpell(std::string spell, ATarget const &target) {
	ASpell *tmp = spellMap[spell];

	if (tmp)
		tmp->launch(target);
}
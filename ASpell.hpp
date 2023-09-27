#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell {
	private:
		std::string _name;
		std::string _effects;
	public:
		ASpell(std::string const &name, std::string const &effects);
		virtual ~ASpell();

		std::string	const &getName() const;
		std::string	const &getEffects() const;
		void	launch(ATarget const &target) const;
		virtual ASpell	*clone() const = 0;
};

#endif
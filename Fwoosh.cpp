#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("fwooshed", "Fwoosh" ) {}

Fwoosh::~Fwoosh() {}

ASpell	*Fwoosh::clone() const {
	return (new Fwoosh());
}
#include "Dame.h"

Dame::Dame(const string nom, const string boissonFavorite, const string couleurRobe):Humain(nom,boissonFavorite),couleurRobe(couleurRobe),etat("libre")
{
}

string Dame::getNom() const
{
	return "Miss "+this->Humain::getNom();
}

string Dame::getEtat() const
{
	return this->etat;
}

void Dame::sePresente() const
{
	string phrase = "Bonjour je suis " + this->getNom() + " et j'ai une jolie robe " + this->couleurRobe;
	this->parle(phrase);
}

void Dame::changeDeRobe(const string couleurRobe)
{
	this->couleurRobe = couleurRobe;
	string phrase = "Regardez ma nouvelle robe " + this->couleurRobe + " !";
	this->parle(phrase);
}

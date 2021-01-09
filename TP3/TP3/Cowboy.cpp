#include "Cowboy.h"

Cowboy::Cowboy(const string nom, const string boissonFavorite, const int popularite):Humain(nom,boissonFavorite),popularite(popularite),adjectif("vaillant")
{
}

string Cowboy::getAdjectif() const
{
	return this->adjectif;
}

void Cowboy::sePresente() const
{
	string phrase = "Bonjour je suis le " + this->adjectif + " "+ this->getNom() + "et j'aime le " + this->getBoissonFavorite();
	this->parle(phrase);
}

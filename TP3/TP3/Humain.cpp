#include "Humain.h"

Humain::Humain(const string nom, const string boissonFavorite):nom(nom),boissonFavorite(boissonFavorite)
{
}

string Humain::getBoissonFavorite() const
{
	return this->boissonFavorite;
}

void Humain::setBoissonFavorite(const string bf)
{
	this->boissonFavorite = bf;
}

string Humain::getNom() const
{
	return this->nom;
}

void Humain::sePresente() const
{
	string phrase = "Bonjour, je suis " + this->nom + " et j'aime le " + this->boissonFavorite;
	this->parle(phrase);
}

void Humain::boit() const
{
	string phrase = "Ah ! un bon verre de "+ this->boissonFavorite+" ! GLOUPS !";
	this->parle(phrase);
}

void Humain::parle(const string txt) const
{
	cout << "(" << this->nom << ") -- " << txt << endl;
}

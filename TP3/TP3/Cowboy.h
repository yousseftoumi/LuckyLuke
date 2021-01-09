#pragma once
#include "Humain.h"
class Cowboy : public Humain
{
public:
	// Constructeurs et Destructeur
	Cowboy(const string nom = "", const string boissonFavorite = "whisky", const int popularite = 0);
	// Accesseurs
	string getAdjectif() const;
	// Services
	void sePresente() const; // redéfinition
private:
	int popularite;
	string adjectif;
};


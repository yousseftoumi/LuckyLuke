#pragma once
#include "Humain.h"
class Dame : public Humain
{
public:
	// Constructeurs et Destructeur
	Dame(const string nom = "", const string boissonFavorite = "lait", const string
		couleurRobe = "blanche");
	// Accesseurs
	string getNom() const; // redéfinition
	string getEtat() const;
	// Services
	void sePresente() const; // redéfinition
	void changeDeRobe(const string couleurRobe);
private:
	string couleurRobe;
	string etat;
};


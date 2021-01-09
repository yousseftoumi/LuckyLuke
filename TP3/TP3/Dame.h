#pragma once
#include "Humain.h"
class Dame : public Humain
{
public:
	// Constructeurs et Destructeur
	Dame(const string nom = "", const string boissonFavorite = "lait", const string
		couleurRobe = "blanche");
	// Accesseurs
	string getNom() const; // red�finition
	string getEtat() const;
	// Services
	void sePresente() const; // red�finition
	void changeDeRobe(const string couleurRobe);
private:
	string couleurRobe;
	string etat;
};


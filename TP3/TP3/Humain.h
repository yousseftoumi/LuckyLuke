#pragma once
#include <iostream>
#include <string>
using namespace std;

class Humain
{
public:
	// Constructeur :
	Humain(const string nom, const string boissonFavorite = "eau"); // de l’eau par défaut
	string getBoissonFavorite()const;
	void setBoissonFavorite(const string);
	string getNom()const;
	void sePresente()const;
	void boit()const;
	void parle(const string)const;
private:
	string nom;
	string boissonFavorite;
};

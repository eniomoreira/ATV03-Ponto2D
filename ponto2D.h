#ifndef PONTO2D_H
#define PONTO2D_H
#include <iostream>

class Ponto
{
private:
	double _x;
	double _y;
	static int _id;

public:
	//Constructor
	Ponto(double x=0, double y=0);
	//Destructor
	~Ponto();

	//Basic getters
	int getNextId() const ;
	inline double getX() const;
	inline double getY() const;

	//Other methods
	void print() const; // Imprimir coordenadas X e Y
	double distToOrig(); // Distancia do ponto chamada a origem  0 0 
	double distTo(const Ponto &p2); //Distancia do ponto chamado ao ponto de referencia
	void sumOf(const Ponto &p2); // soma o ponto chamado ao ponto p2
	Ponto sumOf_(const Ponto &p2); // retorna um objeto ponto com a soma do ponto chamado + p2

};
#endif // PONTO2D_H
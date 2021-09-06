#ifndef EXEMPLO_H
#define EXEMPLO_H
#include <iostream>

class Exemplo {
public:
	//Alias para o std::string
	typedef std::string STR;

	Exemplo();
	Exemplo(int, int*);
	~Exemplo();
	void lista_array(STR array[]);
	STR mostra(STR);

	private:
		const double piquadrado = 3.14 * 2;

	protected:
		STR senha = { "MinhaSenhaSecreta" };
};
#endif
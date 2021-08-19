#include <iostream>
#include <string>

class Pessoa {
private :
	int idade = 27;
protected:
	double altura = 1.72;
public:
	void nome() {
		std::cout << "Altamir Dias" << '\n';
	}
};

class Habilidades : public Pessoa {
public:
	void idioma() {
		std::cout << "Portugu�s Brasileiro" << '\n';
	}
	//N�o compila pq idade � private e � acess�vel somente dentro da pr�pria classe
	/*double displayIdade() {
		return idade;
	}*/
	//Compila pq altura � protected e pode ser acessado pelas classes filhas
	double displayAltura() {
		return altura;
	}
};

class Dados : public Habilidades {
public: 
	double displayAlt() {
	return altura;
}
};

int main(int arg, char** argv) {

	Dados dados;
	std::cout << "O nome dele �: ";
	//chama da classe av�
	dados.nome();
	std::cout << "Habilidade dele �: ";
	//chama da classe pai
	dados.idioma();

	//n�o compila devido o encapsulamento
	//std::cout << "A idade dele �: " << dados.idade;
	//std::cout << "A altura dele �: " << dados.altura;
	
	std::cout << "A altura dele �: " << dados.displayAltura();
	std::cout << "A altura dele �: " << dados.displayAlt();
	
	return 0;
}
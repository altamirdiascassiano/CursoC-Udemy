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
		std::cout << "Português Brasileiro" << '\n';
	}
	//Não compila pq idade é private e é acessível somente dentro da própria classe
	/*double displayIdade() {
		return idade;
	}*/
	//Compila pq altura é protected e pode ser acessado pelas classes filhas
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
	std::cout << "O nome dele é: ";
	//chama da classe avô
	dados.nome();
	std::cout << "Habilidade dele é: ";
	//chama da classe pai
	dados.idioma();

	//não compila devido o encapsulamento
	//std::cout << "A idade dele é: " << dados.idade;
	//std::cout << "A altura dele é: " << dados.altura;
	
	std::cout << "A altura dele é: " << dados.displayAltura();
	std::cout << "A altura dele é: " << dados.displayAlt();
	
	return 0;
}
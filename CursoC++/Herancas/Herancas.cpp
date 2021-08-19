#include <iostream>

class Pessoa {
public: 
	void nome() {
		std::cout << "Altamir Dias" << '\n';
	}
};

class Habilidades : public Pessoa{
public:
	void idioma() {
		std::cout << "Português Brasileiro" << '\n';
	}
};

class Dados : public Habilidades {

};

int main(int arg, char **argv) {

	Dados dados;
	std::cout << "O nome dele é: ";
	//chama da classe avô
	dados.nome();
	std::cout << "Habilidade dele é: ";
	//chama da classe pai
	dados.idioma();
	return 0;
}
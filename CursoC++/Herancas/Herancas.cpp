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
		std::cout << "Portugu�s Brasileiro" << '\n';
	}
};

class Dados : public Habilidades {

};

int main(int arg, char **argv) {

	Dados dados;
	std::cout << "O nome dele �: ";
	//chama da classe av�
	dados.nome();
	std::cout << "Habilidade dele �: ";
	//chama da classe pai
	dados.idioma();
	return 0;
}
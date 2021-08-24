//construtor é usado para adicionar valores quando iniciamos um objeto - primeiro a executar
//destutor é usado quando um objeto é morto na memóriqa- último a executar

#include <iostream>

class Qualquer {
public: 
	//Deve respeitar os maiúsculos e minúsculos no construtor
	Qualquer() {
		std::cout << "Eu sou o qualquer - Construtor chamado" << "\n";
	}
	//Pode ter sobrecarga do método
	Qualquer(int valor) {
		std::cout << "Eu sou o qualquer - Construtor chamado parametro= "<< valor << "\n";
	}
	//o destutor recebe o valor ~ antes do nome
	~Qualquer() {
		std::cout << "Eu sou o destrutor - objeto morto na memoria" << "\n";
	}
};

int main(int argc, char **argv) {
	Qualquer objQualquer;
	Qualquer maisUmObjQualquer(55);

	//Limitando escopo no Bloco IF
	if (1 == 1) {
		std::cout << "Dentro do IF" << "\n";
		Qualquer qualquerDoEscopoIf;
		std::cout << "Última linha do IF" << "\n";
		//aqui ele chama o destrutor pois o qualquerDoEscopoIf existe somente no escopo do IF
	}
	return 0;
	//Aqui ele chama o destrutor para os objetos objQualquer e mainUmQualquer
}
// Muito utilizado em sistemas embarcados
// Se possível evite o uso
// Classes e funções que é permitido o acesso a propriedade e métodos encapsulados. Analogamente é como vc confiasse em um vizinho para verificar sua casa

#include <iostream>

class Casa {
public:
	std::string comp = "123";

protected:
	char essid[5] = { 'H','o','m','e','\0' };

private: std::string passwd = "abc";

friend class Vizinho;
};

class Vizinho {
public:
	void controller() {
		Casa navegationCasa;
		std::cout << "Isso aqui está funcionando" << " " << navegationCasa.comp << "A senha é " << navegationCasa.passwd << "\n";
	}
};


int main(int argc, char **argv) {
	Vizinho v;
	v.controller();
	return 0;
}


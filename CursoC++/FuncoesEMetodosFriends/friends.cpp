// Muito utilizado em sistemas embarcados
// Se poss�vel evite o uso
// Classes e fun��es que � permitido o acesso a propriedade e m�todos encapsulados. Analogamente � como vc confiasse em um vizinho para verificar sua casa

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
		std::cout << "Isso aqui est� funcionando" << " " << navegationCasa.comp << "A senha � " << navegationCasa.passwd << "\n";
	}
};


int main(int argc, char **argv) {
	Vizinho v;
	v.controller();
	return 0;
}


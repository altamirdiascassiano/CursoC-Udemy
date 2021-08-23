#include <iostream>

//N�o pode ser est�tica
//Devem ser publicas


class Mae{
public:
	void mae() {
		std::cout << "Eu sou a M�e" << "\n";
	}
	//Fun��o membro e espera que seja definida nas classes derivadas
	virtual void msg() {
		std::cout << "Eu sou a M�e" << "\n";
	}
};

class Filha : public Mae{
public:
	void filha() {
		std::cout << "Eu sou a Filha" << "\n";
	}
	void msg() {
		std::cout << "Eu sou a Filha" << "\n";
	}
};

class Neta : public Filha{
public:
	void neta() {
		std::cout << "Eu sou a neta" << "\n";
	}
	void msg() {
		std::cout << "Eu sou a neta" << "\n";
	}
};

void responde(Mae * ptM) {
	ptM->msg();
}

int main(int argc, char **argv) {
	Mae m;
	Filha f;
	Neta n;

	m.mae();
	f.filha();
	n.neta();
	std::cout << "-------------------" << "\n";
	m.msg();
	f.msg();
	n.msg();
	std::cout << "-------------------" << "\n";
	responde( &m );
	responde( &f );
	responde( &n );
	
	
	return 0;
}
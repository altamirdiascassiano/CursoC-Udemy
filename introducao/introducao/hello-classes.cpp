#include <iostream>

class Hello {
public:
	void helloworld() {
		std::cout << "Olá mundo!" << '\n';
	}
};

int main(int argc, char** argv) {
	
	
	Hello hello;
	hello.helloworld();

	//Poderia ser assim também mas é menos utilizado
	Hello * helloPonteiro{};
	helloPonteiro->helloworld();


	return 0;
}


#include <iostream>

class Hello {
public:
	void helloworld() {
		std::cout << "Ol� mundo!" << '\n';
	}
};

int main(int argc, char** argv) {
	
	
	Hello hello;
	hello.helloworld();

	//Poderia ser assim tamb�m mas � menos utilizado
	Hello * helloPonteiro{};
	helloPonteiro->helloworld();


	return 0;
}

